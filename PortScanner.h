//
// Created by kiptoo on 5/8/24.
//

#ifndef PORTSCANNER_H
#define PORTSCANNER_H

#include <string>
#include <vector>

class PortScanner {
private:
    std::string target_ip;
    std::vector<int> open_ports;

public:
    explicit PortScanner(const std::string& ip);
    void scanPorts();
};

#endif // PORTSCANNER_H

