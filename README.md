# tqccs

![Build Status](https://github.com/FlKo/tqccs/actions/workflows/ci.yml/badge.svg)

A simple C++17 project using vendored third-party libraries (`fmt` and `spdlog`), built with CMake.

## Build Instructions

### Linux & macOS
```sh
mkdir build && cd build
cmake ..
cmake --build .
./myapp

## Usage

Run the program with optional arguments:

```sh
./myapp --name Alice

