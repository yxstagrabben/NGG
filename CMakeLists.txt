cmake_minimum_required(VERSION 3.24)
project(NGG)

set(CMAKE_CXX_STANDARD 23)

add_executable(NGG main.cpp src/run.h src/run.cpp src/run.h src/includes.h src/Game.cpp src/Game.h)
