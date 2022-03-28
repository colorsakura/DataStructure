cmake_minimum_required(VERSION 3.21)
project(DataStructure LANGUAGES C VERSION 0.0.1)

set(CMAKE_C_STANDARD 11)

aux_source_directory(src src)
aux_source_directory(complex com)

add_executable(DataStructure main.c ${src} ${com})
