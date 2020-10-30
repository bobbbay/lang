cmake_minimum_required(VERSION 3.10)
project(lang C)

set(CMAKE_C_STANDARD 99)

add_executable(lang main.c vm.h chunk.h common.h chunk.c memory.h memory.c debug.h debug.c vm.c value.h value.c compiler.h compiler.c scanner.h scanner.c)