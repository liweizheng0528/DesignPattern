cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CUDA_COMPILER "/usr/local/cuda/bin/nvcc")
project(Hungry LANGUAGES CXX CUDA)

message("dir:Hungry")

# include_directories(.)
# aux_source_directory(./ )
add_executable(Hungry main.cpp Singleton.cpp)
target_include_directories(Hungry PUBLIC .)