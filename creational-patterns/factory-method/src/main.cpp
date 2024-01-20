#include "factory_method/factory/cappuccino_factory.h"
#include "factory_method/factory/espresso_factory.h"
#include "factory_method/factory/latte_factory.h"


void serveCoffee(const CoffeeFactory& factory) {
    std::unique_ptr<Coffee> coffee = factory.createCoffee();
    coffee->brew();
}

int main() {
  // Serve different styles of coffee using the Factory Method pattern
  EspressoFactory espressoFactory;
  serveCoffee(espressoFactory);

  LatteFactory latteFactory;
  serveCoffee(latteFactory);

  CappuccinoFactory cappuccinoFactory;
  serveCoffee(cappuccinoFactory);

  return 0;
}
