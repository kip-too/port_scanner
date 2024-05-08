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
```

## Execution
### To run the port scanner:
```bash
./portscanner <target_ip>
```
## Sample Execution
Assuming the target IP address is 127.0.0.1, a sample execution would look like this:
```bash
./portscanner 127.0.0.1
```
### Sample Output
```bash
Scanning ports for target IP: 127.0.0.1
Port 22 is open
Port 80 is open
Scan completed. Open ports: 22 80
```
### Note
The port scanner scans ports from 1 to 65535.
It uses socket programming to establish connections and determine open ports.
Error messages are printed for any issues encountered during scanning.



