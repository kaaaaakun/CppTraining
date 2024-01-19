#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  maxHitPoint_ = 100;
  HitPoint_ = maxHitPoint_;
  EnergyPoint_ = 50;
  AttackDamage_ = 20;
  std::cout << "ScavTrap " << Name_ << " is created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  maxHitPoint_ = other.maxHitPoint_;
  HitPoint_ = other.HitPoint_;
  EnergyPoint_ = other.EnergyPoint_;
  AttackDamage_ = other.AttackDamage_;
  std::cout << "ScavTrap " << Name_ << " is copied" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
  }
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << Name_ << " is destroyed" << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << Name_ << " is now in Gatekeeper mode."
            << std::endl;
}

void ScavTrap::attack(std::string const &target) {
  if (HitPoint_ == 0) {
    std::cout << "ScavTrap " << Name_ << " is already dead." << std::endl;
    return;
  }
  if (EnergyPoint_ < 1) {
    std::cout << "ScavTrap "
              << "Cannot attack. " << Name_ << " has insufficient energy."
              << std::endl;
    return;
  }
  std::cout << "ScavTrap " << Name_ << " attacks " << target << ", causing "
            << AttackDamage_ << "points of damage!" << std::endl;
  EnergyPoint_--;
}
