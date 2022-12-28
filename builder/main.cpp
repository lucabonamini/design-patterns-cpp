#include <iostream>
#include <memory>
#include <string>
#include <string_view>

using namespace std;

class House {
public:
void SetBasement(string_view basement) {
  basement_ = basement;
};
void SetStructure(string_view structure) {
  structure_ = structure;
};
void SetRoof(string_view roof) {
  roof_ = roof;
};
void SetInterior(string_view interior) {
  interior_ = interior;
};
void SetGarage(string_view garage) {
  garage_ = garage;
};
void SetSwimmingPool(string_view pool) {
  pool_ = pool;
};
string Get() const {
  return basement_ + " " + structure_ + " " + roof_ + " " + interior_ + " " + garage_ + " " + pool_;
}
private:
string basement_ = "";
string structure_ = "";
string roof_ = "";
string interior_ = "";
string garage_ = "";
string pool_ = "";
};

class HouseBuilder {
public:
virtual ~HouseBuilder() = default;
virtual void BuildBasement() {};
virtual void BuildStructure() {};
virtual void BuildRoof() {};
virtual void BuildInterior() {};
virtual void BuildGarage() {};
virtual void BuildSwimmingPool() {};
virtual House GetHouse() const { return {}; };
};

class StandardHouseBuilder final : public HouseBuilder {
public:
void BuildBasement() override {
  house.SetBasement("Build basement");
}
void BuildStructure() override{
  house.SetStructure("Build structure");
}
void BuildRoof() override {
  house.SetRoof("Build roof");
}
void BuildInterior() override {
  house.SetInterior("Build interior");
}
House GetHouse() const override {
  return house;
}
private:
House house;
};

class LuxuryHouseBuilder final : public HouseBuilder {
public:
void BuildBasement() override {
  house.SetBasement("Build basement");
}
void BuildStructure() override{
  house.SetStructure("Build structure");
}
void BuildRoof() override {
  house.SetRoof("Build roof");
}
void BuildInterior() override {
  house.SetInterior("Build interior");
}
void BuildGarage() override {
  house.SetGarage("Build garage");
}
void BuildSwimmingPool() override {
  house.SetSwimmingPool("Build swimming pool");
}
House GetHouse() const override {
  return house;
}
private:
House house;
};

class Director {
public:
Director(std::unique_ptr<HouseBuilder>&& builder) : builder_(std::move(builder)) {}
House GetHouse() const {
  return builder_->GetHouse();
}
void ConstructHouse() {
  builder_->BuildBasement();
  builder_->BuildStructure();
  builder_->BuildRoof();
  builder_->BuildInterior();
  builder_->BuildGarage();
  builder_->BuildSwimmingPool();
}

private:
std::unique_ptr<HouseBuilder> builder_;
};

int main() {
  std::unique_ptr<HouseBuilder> builder;
  std::unique_ptr<Director> director;
  string choice;
  cout << "Which house do you want to build: Standard, Luxury" << "\n";
  cin >> choice;
  if (choice.compare("Standard") == 0) {
    builder.reset(new StandardHouseBuilder());
  } else if (choice.compare("Luxury") == 0) {
    builder.reset(new LuxuryHouseBuilder());
  }

  director.reset(new Director(std::move(builder)));
  director->ConstructHouse();
  cout << "List of steps done: " << director->GetHouse().Get() << endl;

  return 0;
}
