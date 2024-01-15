#pragma once

#include <memory>


class Chair {
    public:
    virtual void sit() const = 0;
};

class Sofa {
    public:
    virtual void relax() const = 0;
};

class Table {
    public:
    virtual void place() const = 0;
};