#pragma once

#include "singleton/pastry.h"

#include <memory>

class PastryFactory {
public:
    // Global access point
    static PastryFactory& getInstance();

    // Create different types of pastries with flavors
    std::unique_ptr<Pastry> createCake(const std::string& flavor);
    std::unique_ptr<Pastry> createCookie(const std::string& flavor);
    std::unique_ptr<Pastry> createMuffin(const std::string& flavor);

private:
    // Private constructor to enforce singleton
    PastryFactory();

    // Private copy constructor and assignment operator to prevent duplication
    PastryFactory(const PastryFactory&) = delete;
    PastryFactory& operator=(const PastryFactory&) = delete;

    // Private destructor to prevent external deletion
    ~PastryFactory();

    // Other private members...
};
