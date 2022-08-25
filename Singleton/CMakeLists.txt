cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CUDA_COMPILER "/usr/local/cuda/bin/nvcc")
project(Singleton LANGUAGES CXX CUDA)
add_subdirectory(Hungry)
add_subdirectory(Meyers)
add_subdirectory(ThreadsafeLazy)
add_subdirectory(TreadunsafeLazy)