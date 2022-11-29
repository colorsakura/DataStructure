cmake_minimum_required(VERSION 3.21)
project(Calculator LANGUAGES C VERSION 0.1.0)

set(CMAKE_C_STANDARD 11)

add_executable(calculator main.c cal_string.c cal_string.h calculate.c calculate.h)