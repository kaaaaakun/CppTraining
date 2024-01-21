# Inheritance Project

This project demonstrates the concept of inheritance in C++ using a playful example of ClapTrap, FragTrap, and ScavTrap classes. Each class extends the functionality of its parent, showcasing polymorphism and encapsulation.

## Project Structure

- `ClapTrap.hpp` & `ClapTrap.cpp`: Base class providing fundamental attributes and methods for a trap.
- `FragTrap.hpp` & `FragTrap.cpp`: Derived class from ClapTrap with additional capabilities like high-fives.
- `ScavTrap.hpp` & `ScavTrap.cpp`: Another derived class from ClapTrap specialized in guarding gates.
- `main.cpp`: The main driver code demonstrating the functionalities of different traps.
- `Makefile`: A makefile for compiling the project.

## Building the Project

Ensure you have a C++ compiler that supports C++98 standard. You can build the project using the provided Makefile:

```bash
make
./Inheritance

