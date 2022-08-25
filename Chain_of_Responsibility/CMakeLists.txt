cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CUDA_COMPILER "/usr/local/cuda/bin/nvcc")
project(Chain_of_Responsibility LANGUAGES CXX CUDA)

message("dir:${PROJECT_NAME}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w")

# include_directories(.)
# aux_source_directory(./ SOURCES)
add_executable(Chain_of_Responsibility src/chain_of_Responsibility.cpp)
target_include_directories(Chain_of_Responsibility PUBLIC include)