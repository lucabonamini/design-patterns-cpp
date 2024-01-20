#pragma once

#include <string>

class Computer {
public:
    void setCPU(const std::string& cpu);
    void setRAM(const std::string& ram);
    void setStorage(const std::string& storage);
    void setGraphicsCard(const std::string& graphicsCard);
    void display() const;

private:
    std::string cpu_;
    std::string ram_;
    std::string storage_;
    std::string graphicsCard_;
};
