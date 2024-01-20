#include "singleton/pastry.h"

#include <iostream>

Cake::Cake(const std::string& flavor) : flavor_(flavor) {}

void Cake::display() const {
    std::cout << "Cake flavored with " << flavor_ << "\n";
}

Cookie::Cookie(const std::string& flavor) : flavor_(flavor) {}

void Cookie::display() const {
    std::cout << "Cookie flavored with " << flavor_ << "\n";
}

Muffin::Muffin(const std::string& flavor) : flavor_(flavor) {}

void Muffin::display() const {
    std::cout << "Muffin flavored with " << flavor_ << "\n";
}
