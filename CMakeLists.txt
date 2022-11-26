cmake_minimum_required(VERSION 3.21)
project(DataStructure LANGUAGES C VERSION 0.1.0)

set(CMAKE_C_STANDARD 11)

add_executable(test_queue test/test_queue.c src/queue.h src/queue.c)

add_executable(test_list test/test_list.c src/list.h src/list.c)