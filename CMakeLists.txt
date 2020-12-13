cmake_minimum_required(VERSION 3.17)
project(unknownpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(unknownpp main.cpp Scanner.cpp Scanner.h Parser.cpp Parser.h cmake-build-debug/Compiler.cpp cmake-build-debug/Compiler.h)