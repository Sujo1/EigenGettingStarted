# Getting started with Eigen and CMake

This is just a simple example intended to show how to compile a program using the Eigen library and CMake.

# Prerequisites

First, install the dependencies.

```
sudo apt-get install build-essential libeigen3-dev cmake
```

# Running the Example

Download the example.

```
git clone https://github.com/Sujo1/EigenGettingStarted.git
```

Create a build directory and use cmake.

```
mkdir build
cd build
cmake ..
```
Compile and run the example.
```
make
./hello_Eigen
```

You can check the CMakeLists.txt file and the example using vim.

```
vim ../CMakeLists.txt ../hello_eigen.cpp
```
# Next Steps

Try changing hello_Eigen.cpp and following the tutorials in https://eigen.tuxfamily.org/dox/index.html

# License

This project is licensed under the GPL-3.0 License - see the [LICENSE.md](LICENSE.md) file for details
