# FaaRayGUI

Qt6 graphic interface using
[FaaRay](https://github.com/faalbers/FaaRay)
ray trace rendering library.

### git clone:

```
git clone --recursive https://github.com/faalbers/FaaRayGUI.git
```

### git clone in vscode:

```
ctrl+sht+p -> Git: Clone (Recursive)
```

### build

```
cd FaaRayGUI
cmake -B build -G "MinGW Makefiles" -D CMAKE_BUILD_TYPE:STRING=Release
cmake --build build --config Release -j 10 --
