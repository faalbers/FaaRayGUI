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
cd FaaRay
cmake -B build
cmake --build build --config Release --target install -j 10 --
