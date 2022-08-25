cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CUDA_COMPILER "/usr/local/cuda/bin/nvcc")
project(ThreadsafeLazy LANGUAGES CXX CUDA)

message("dir:ThreadsafeLazy")

# include_directories(.)
# aux_source_directory(./ )
add_executable(ThreadsafeLazy main.cpp Singleton.cpp)
target_include_directories(ThreadsafeLazy PUBLIC .)