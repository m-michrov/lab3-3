cmake_minimum_required(VERSION 3.12)
project(sort C)

set(CMAKE_C_STANDARD 99)

set(SRC main.c sort.h io.h hsort.c qsort.c)

add_executable(${PROJECT_NAME} ${SRC})