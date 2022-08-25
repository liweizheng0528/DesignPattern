cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CUDA_COMPILER "/usr/local/cuda/bin/nvcc")
project(Flyweight LANGUAGES CXX CUDA)

message("dir:${PROJECT_NAME}")

# include_directories(.)
# aux_source_directory(./ )
add_executable(Flyweight src/Flyweight.cpp)
# add_executable(Flyweight src/Flyweight.cpp src/FlyweightFactory.cpp)
target_include_directories(Flyweight PUBLIC include)