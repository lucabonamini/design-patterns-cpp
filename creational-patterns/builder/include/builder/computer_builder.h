#pragma once

#include "builder/computer.h"

class ComputerBuilder {
public:
    virtual void buildCPU() = 0;
    virtual void buildRAM() = 0;
    virtual void buildStorage() = 0;
    virtual void buildGraphicsCard() = 0;
    virtual Computer getResult() = 0;
    virtual ~ComputerBuilder() = default;
};
