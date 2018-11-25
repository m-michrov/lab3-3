cmake_minimum_required(VERSION 3.12)
project(lab3_3 C)

set(CMAKE_C_STANDARD 99)

set(SRC main.c sort.h io.h hsort.c qsort.c)

add_executable(${PROJECT_NAME} ${SRC})