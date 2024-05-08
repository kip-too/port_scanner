cmake_minimum_required(VERSION 3.28)
project(port_scanner)

set(CMAKE_CXX_STANDARD 17)

add_executable(port_scanner main.cpp
        PortScanner.h
        PortScanner.cpp)
