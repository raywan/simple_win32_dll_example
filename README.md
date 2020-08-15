# Simple win32 DLL Example

Simple example on creating and linking to a DLL on Windows

# Running

First build the DLL with `build_dll.bat`. Running this creates the DLL file (`.dll`) and the import library (`.lib`) file.

``` sh
build_dll
```

Next build the example program. Running `build.bat` with no arguments will default to the [**implicit linking**](https://docs.microsoft.com/en-us/cpp/build/linking-an-executable-to-a-dll?view=vs-2019#implicit-linking) example.
The other option is to provide `EXPLICIT` as an argument to compile the [**explicit linking**](https://docs.microsoft.com/en-us/cpp/build/linking-an-executable-to-a-dll?view=vs-2019#explicit-linking) example. It is also possible to explicitly state which example to use.

```sh
# Three options
build
build IMPLICIT
build EXPLICIT
```

The executable created will be called `run_example.exe`.

```
run_example
```
