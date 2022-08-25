cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CUDA_COMPILER "/usr/local/cuda/bin/nvcc")
project(Memento LANGUAGES CXX CUDA)

message("dir:${PROJECT_NAME}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w")

# include_directories(.)
# aux_source_directory(./ SOURCES)
add_executable(Memento src/Memento.cpp)
target_include_directories(Memento PUBLIC include)