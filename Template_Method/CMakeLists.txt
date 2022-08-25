cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CUDA_COMPILER "/usr/local/cuda/bin/nvcc")
project(Template_Method LANGUAGES CXX CUDA)

message("dir:${PROJECT_NAME}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w")

# include_directories(.)
# aux_source_directory(./ SOURCES)
add_executable(Template_Method src/Template_Method.cpp)
target_include_directories(Template_Method PUBLIC include)