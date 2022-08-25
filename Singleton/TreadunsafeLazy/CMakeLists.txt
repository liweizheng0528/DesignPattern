cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CUDA_COMPILER "/usr/local/cuda/bin/nvcc")
project(TreadunsafeLazy LANGUAGES CXX CUDA)

message("dir:TreadunsafeLazy")

# include_directories(.)
# aux_source_directory(./ )
add_executable(TreadunsafeLazy main.cpp Singleton.cpp)
target_include_directories(TreadunsafeLazy PUBLIC .)