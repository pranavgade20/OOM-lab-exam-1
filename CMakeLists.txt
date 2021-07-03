cmake_minimum_required(VERSION 3.20)
project(OOM_Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(OOM_Project main.cpp Compressor.h Compressor.cpp CoolingUnit.cpp CoolingUnit.h CompressorSize.h AirConditioner.cpp AirConditioner.h Freezer.cpp Freezer.h)