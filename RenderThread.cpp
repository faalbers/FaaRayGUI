#include "RenderThread.hpp"
#include "FaaRay.hpp"
#include <iostream>
#include <chrono>

RenderThread::RenderThread(std::shared_ptr<FaaRay::RenderJob> renderJobSPtr)
    :   renderJobSPtr_(renderJobSPtr)
{
    constructDebug("RenderThread");
}

RenderThread::~RenderThread()
{
    sPtrDebug("RenderThread:renderJobSPtr_", renderJobSPtr_);
    deconstructDebug("RenderThread");
}

void RenderThread::run()
{
    renderJobSPtr_->render();

    emit renderDone();
}


