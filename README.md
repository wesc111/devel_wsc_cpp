# devel_wsc_cpp

A collection of C++ example projects demonstrating various programming concepts.

## Examples

This repository contains several example projects:

### 1. Hello World
A basic C++ program that prints "Hello, World!" to the console.

**Location:** `examples/hello_world/`

### 2. Calculator
A simple command-line calculator that performs basic arithmetic operations (addition, subtraction, multiplication, division).

**Location:** `examples/calculator/`

### 3. File I/O
Demonstrates reading from and writing to files using C++ file streams.

**Location:** `examples/file_io/`

### 4. Data Structures
Shows usage of common C++ STL data structures including vectors, maps, and sets.

**Location:** `examples/data_structures/`

## Building the Examples

### Prerequisites
- CMake 3.10 or higher
- A C++ compiler with C++11 support (g++, clang++, MSVC, etc.)

### Build Instructions

1. Create a build directory:
```bash
mkdir build
cd build
```

2. Configure with CMake:
```bash
cmake ..
```

3. Build all examples:
```bash
cmake --build .
```

### Running the Examples

After building, the executables will be in the `build` directory:

```bash
# Hello World
./examples/hello_world/hello_world

# Calculator (interactive)
./examples/calculator/calculator

# File I/O
./examples/file_io/file_io

# Data Structures
./examples/data_structures/data_structures
```

## Building Individual Examples

You can also build each example separately:

```bash
cd examples/hello_world
mkdir build
cd build
cmake ..
cmake --build .
./hello_world
```

## License

This project is provided as-is for educational purposes.