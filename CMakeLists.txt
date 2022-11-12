cmake_minimum_required(VERSION 3.23)
project(c_with_classes C)

set(CMAKE_C_STANDARD 17)

add_executable(c_with_classes main.c dog.h iAnimal.h dog.c cat.h cat.c)
