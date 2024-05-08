//
// Created by kiptoo on 5/8/24.
//

#include "PortScanner.h"
#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

PortScanner::PortScanner(const std::string& ip) : target_ip(ip) {}

void PortScanner::scanPorts() {
    std::cout << "Scanning ports for target IP: " << target_ip << std::endl;

    for (int port = 1; port <= 65535; ++port) {
        int sock = socket(AF_INET, SOCK_STREAM, 0);
        if (sock == -1) {
            std::cerr << "Error: Failed to create socket" << std::endl;
            return;
        }

        struct sockaddr_in target_addr;
        target_addr.sin_family = AF_INET;
        target_addr.sin_addr.s_addr = inet_addr(target_ip.c_str());
        target_addr.sin_port = htons(port);

        if (connect(sock, (struct sockaddr *)&target_addr, sizeof(target_addr)) == 0) {
            std::cout << "Port " << port << " is open" << std::endl;
            open_ports.push_back(port);
        }

        close(sock);
    }

    std::cout << "Scan completed. Open ports: ";
    for (int port : open_ports) {
        std::cout << port << " ";
    }
    std::cout << std::endl;
}
