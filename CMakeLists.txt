cmake_minimum_required(VERSION 3.21)
project(DataStructure LANGUAGES C VERSION 0.1.0)

set(CMAKE_C_STANDARD 17)

add_executable(test_queue test/test_queue.c src/queue.h src/queue.c)