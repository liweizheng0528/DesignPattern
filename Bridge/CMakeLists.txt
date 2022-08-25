cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CUDA_COMPILER "/usr/local/cuda/bin/nvcc")
project(Bridge LANGUAGES CXX CUDA)

message("dir:${PROJECT_NAME}")

# include_directories(.)
# aux_source_directory(./ )
add_executable(Bridge src/Bridge.cpp)
target_include_directories(Bridge PUBLIC include)