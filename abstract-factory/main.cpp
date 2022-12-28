#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Button {
public:
virtual ~Button() = default;
virtual void Paint() const = 0;
};

class WinButton final : public Button {
public:
void Paint() const override {
  cout << "Rendering a Button in Win style." << endl;
}
};

class MacButton final : public Button {
public:
void Paint() const override {
  cout << "Rendering a Button in Mac style." << endl;
}
};

class Checkbox {
public:
virtual ~Checkbox() = default;
virtual void Paint() const = 0;
};

class WinCheckbox final : public Checkbox {
public:
void Paint() const override {
  cout << "Rendering a Checkbox in Win style." << endl;
}
};

class MacCheckbox final : public Checkbox {
public:
void Paint() const override {
  cout << "Rendering a Checkbox in Mac style." << endl;
}
};

class GUIFactory {
public:
virtual ~GUIFactory() = default;
virtual std::unique_ptr<Button> CreateButton() const = 0;
virtual std::unique_ptr<Checkbox> CreateCheckbox() const = 0;
};

class WinFactory final : public GUIFactory {
public:
std::unique_ptr<Button> CreateButton() const override {
  return std::make_unique<WinButton>();
}
std::unique_ptr<Checkbox> CreateCheckbox() const override {
  return std::make_unique<WinCheckbox>();
}
};

class MacFactory final : public GUIFactory {
public:
std::unique_ptr<Button> CreateButton() const override {
  return std::make_unique<MacButton>();
}
std::unique_ptr<Checkbox> CreateCheckbox() const override {
  return std::make_unique<MacCheckbox>();
}
};

int main() {
  std::unique_ptr<GUIFactory> gui_factory;
  string choice;
  cout << "Choose system type: Windows, Mac" << "\n";
  cin >> choice;
  if (choice.compare("Windows") == 0) {
    gui_factory.reset(new WinFactory());
  } else if (choice.compare("Mac") == 0) {
    gui_factory.reset(new MacFactory());
  }
  auto button = std::move(gui_factory->CreateButton());
  auto checkbox = std::move(gui_factory->CreateCheckbox());

  button->Paint();
  checkbox->Paint();

  return 0;
}
