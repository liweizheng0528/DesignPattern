cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CUDA_COMPILER "/usr/local/cuda/bin/nvcc")
project(Meyers LANGUAGES CXX CUDA)

message("dir:Meyers")

# include_directories(.)
# aux_source_directory(./ )
add_executable(Meyers main.cpp)
target_include_directories(Meyers PUBLIC .)
target_link_libraries(Meyers pthread)