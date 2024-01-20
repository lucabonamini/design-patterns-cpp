#include "singleton/pastry_factory.h"

int main() {
    // Access the pastry factory instance
    PastryFactory& pastryFactory = PastryFactory::getInstance();

    // Create different types of pastries with flavors using smart pointers
    auto chocolateCake = pastryFactory.createCake("Chocolate");
    auto oatmealCookie = pastryFactory.createCookie("Oatmeal");
    auto bananaNutMuffin = pastryFactory.createMuffin("Banana Nut");

    // Display the pastries
    chocolateCake->display();
    oatmealCookie->display();
    bananaNutMuffin->display();

    return 0;
}
