#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Button {
public:
virtual ~Button() = default;
virtual void RenderButton() const = 0;
};

class WindowsButton final : public Button {
public:
void RenderButton() const override {
  cout << "Rendering WindowsButton." << endl;
}
};

class HTMLButton final : public Button {
public:
void RenderButton() const override {
  cout << "Rendering HTMLButton." << endl;
}
};

class Dialog {
public:
virtual ~Dialog() = default;
virtual std::unique_ptr<Button> CreateButton() const = 0;
void Render() const {
  auto button = std::move(this->CreateButton());
  button->RenderButton();
}
};

class WindowsDialog final : public Dialog {
public:
std::unique_ptr<Button> CreateButton() const override {
  return std::make_unique<WindowsButton>();
}
};

class WebDialog final : public Dialog {
public:
std::unique_ptr<Button> CreateButton() const override {
  return std::make_unique<HTMLButton>();
}
};

int main() {
  std::unique_ptr<Dialog> dialog;
  string choice;
  cout << "Choose button type: Windows, HTML" << "\n";
  cin >> choice;
  if (choice.compare("Windows") == 0) {
    dialog.reset(new WindowsDialog());
  } else if (choice.compare("HTML") == 0) {
    dialog.reset(new WebDialog());
  }
  auto button = dialog->CreateButton();
  button->RenderButton();
  return 0;
}
