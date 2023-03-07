# eigen-doctest-example

[![CI](https://github.com/InspireFoundationEc/eigen-doctest-example/actions/workflows/CI.yml/badge.svg)](https://github.com/InspireFoundationEc/eigen-doctest-example/actions/workflows/CI.yml)

This example repo shows how to write unit tests for a program that uses Eigen.

## Pre-requirements
- GNU Compilation Tools: specifically `g++` and `make`
- Eigen library
- Doctest library

    _See the [Resources](#resources) section for installation instructions._

## Build & Run

To build the `main` and `test` executables, run the following command in the root directory of the project:
```bash
make all
```

To run the executables, `cd` into the `build` directory, and then:
```bash
# Linux
./main
./test -s

# Windows
./main.exe
./test.exe -s
```

To clean the build directory:
```bash
make clean
```


## Resources
- How to install Eigen: follow [this guide](https://eigen.tuxfamily.org/dox/GettingStarted.html)

- How to install Doctest: follow [this guide](https://github.com/doctest/doctest/blob/master/doc/markdown/tutorial.md)

-  How to install GNU Compilation Tools on Windows
    - Get `gcc/g++` [here](https://www.msys2.org/)
    - Install `make` [like this](https://stackoverflow.com/a/54086635/8522453) 
    - Or follow [this guide](https://code.visualstudio.com/docs/cpp/config-mingw) to set up GCC and Visual Studio Code 
