#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal") {
  std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
  std::cout << "WrongAnimal copy constructor called" << std::endl;
  *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  if (this != &other) {
    this->type_ = other.type_;
  }
  return *this;
}

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal make sound!" << std::endl;
}

std::string WrongAnimal::getType() const { return this->type_; }
