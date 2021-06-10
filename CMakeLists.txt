cmake_minimum_required(VERSION 3.17)
project(c_modern C)

set(CMAKE_C_STANDARD 99)

add_executable(c_modern 4_chart/main.c test.c 4_chart/addfrac.c 4_chart/upc.c)