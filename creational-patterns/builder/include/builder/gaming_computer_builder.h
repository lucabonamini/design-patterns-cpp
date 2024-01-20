#pragma once

#include "computer_builder.h"

class GamingComputerBuilder : public ComputerBuilder {
public:
    void buildCPU() override;
    void buildRAM() override;
    void buildStorage() override;
    void buildGraphicsCard() override;
    Computer getResult() override;

private:
    Computer computer_;
};
