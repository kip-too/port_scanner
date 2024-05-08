# Port Scanner

## Overview

This project implements a simple command-line port scanner in C++, demonstrating basic socket programming concepts. It scans a range of TCP ports on a specified IP address and determines which ports are open.

## Project Structure

The project consists of the following files:

- `main.cpp`: Contains the main function serving as the entry point of the program.
- `PortScanner.h`: Header file declaring the `PortScanner` class.
- `PortScanner.cpp`: Implementation file defining the methods of the `PortScanner` class.

## How to Use

### Compilation

To compile the port scanner:

```bash
g++ -std=c++11 -c main.cpp PortScanner.cpp
g++ -o portscanner main.o PortScanner.o

## Execution
### To run the port scanner:

