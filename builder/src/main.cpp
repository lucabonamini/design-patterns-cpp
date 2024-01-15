#include "builder/computer_assembler.h"
#include "builder/gaming_computer_builder.h"
#include "builder/office_computer_builder.h"

#include <memory>

int main() {
  ComputerAssembler computerAssembler;

  // Gaming Computer
  std::unique_ptr<ComputerBuilder> computer_builder = std::make_unique<GamingComputerBuilder>();
  auto computer = computerAssembler.assembleComputer(*computer_builder);
  computer.display();

  // Office Computer
  computer_builder.reset(new OfficeComputerBuilder());
  computer = computerAssembler.assembleComputer(*computer_builder);
  computer.display();

  return 0;
}
