#include <iostream>
#include "PortScanner.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <target_ip>" << std::endl;
        return 1;
    }

    std::string target_ip = argv[1];
    PortScanner scanner(target_ip);
    scanner.scanPorts();

    return 0;
}
