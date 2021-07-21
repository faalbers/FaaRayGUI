cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(FaaRayGUI VERSION 0.1 LANGUAGES CXX)

execute_process(COMMAND git submodule update --init --recursive
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

#add_compile_definitions(CLASS_DEBUG)
#add_compile_definitions(SHARED_POINTER_DEBUG)

set(CMAKE_PREFIX_PATH C:/Qt/6.1.1/mingw81_64)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 COMPONENTS Widgets OpenGLWidgets REQUIRED)

add_subdirectory(extern/FaaRay)

file(GLOB FAARAYGUI_SOURCES *.cpp )

add_executable(${PROJECT_NAME} ${FAARAYGUI_SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets FaaRay GFA)

