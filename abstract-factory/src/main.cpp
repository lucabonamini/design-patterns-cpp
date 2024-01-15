#include "abstract_factory/factory/classic_factory.h"
#include "abstract_factory/factory/modern_factory.h"
#include "abstract_factory/factory/rustic_factory.h"


int main() {
  // Create a Modern Furniture Factory
  std::unique_ptr<FurnitureFactory> furniture_factory = std::make_unique<ModernFurnitureFactory>();

  // Create modern furniture
  auto chair = furniture_factory->createChair();
  auto table = furniture_factory->createTable();
  auto sofa = furniture_factory->createSofa();

  chair->sit();
  table->place();
  sofa->relax();

  // Create a Classic Furniture Factory
  furniture_factory.reset(new ClassicFurnitureFactory());

  // Create classic furniture
  chair = furniture_factory->createChair();
  table = furniture_factory->createTable();
  sofa = furniture_factory->createSofa();

  chair->sit();
  table->place();
  sofa->relax();

  // Create a Rustic Furniture Factory
  furniture_factory.reset(new RusticFurnitureFactory());

  // Create rustic furniture
  chair = furniture_factory->createChair();
  table = furniture_factory->createTable();
  sofa = furniture_factory->createSofa();

  chair->sit();
  table->place();
  sofa->relax();
  
  return 0;
}
