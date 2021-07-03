cmake_minimum_required(VERSION 3.20)
project(OOM_Project)

set(CMAKE_CXX_STANDARD 14)

# just make an executable that contains code from all the files in this project
add_executable(OOM_Project main.cpp Compressor.cpp CoolingUnit.cpp AirConditioner.cpp Freezer.cpp)