#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
    _hitPoints = FragTrap::_hitPoints;    // Use FragTrap's hit points
    _energyPoints = ScavTrap::_energyPoints; // Use ScavTrap's energy points
    _attackDamage = FragTrap::_attackDamage; // Use FragTrap's attack damage
    std::cout << COLOR_BLUE << "DiamondTrap " << _name << " constructed!" << COLOR_RESET << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << COLOR_BLUE << "DiamondTrap " << _name << " destructed!" << COLOR_RESET << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << COLOR_BLUE << "DiamondTrap name: " << _name
              << ", ClapTrap name: " << ClapTrap::_name << COLOR_RESET << std::endl;
}
