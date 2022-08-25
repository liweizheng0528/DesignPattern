cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CUDA_COMPILER "/usr/local/cuda/bin/nvcc")
project(Composite LANGUAGES CXX CUDA)

message("dir:${PROJECT_NAME}")

# include_directories(.)
# aux_source_directory(./ )
add_executable(Composite src/Composite.cpp)
target_include_directories(Composite PUBLIC include)