cmake_minimum_required(VERSION 3.21)
project(DataStructure LANGUAGES C VERSION 0.0.1)

set(CMAKE_C_STANDARD 17)

add_executable(DataStructure src/main.c src/queue.h src/queue.c)