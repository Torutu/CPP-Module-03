#include "FragTrap.hpp"

// Define macros for green and reset
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    // Using GREEN and RESET macros
    std::cout << COLOR_GREEN << "FragTrap " << _name << " constructed!" << COLOR_RESET << std::endl;
}

FragTrap::~FragTrap() {
    // Using GREEN and RESET macros
    std::cout << COLOR_GREEN << "FragTrap " << _name << " destructed!" << COLOR_RESET << std::endl;
}

void FragTrap::highFivesGuys() {
    // Using GREEN and RESET macros
    std::cout << COLOR_GREEN << "FragTrap " << _name << " requests a high five! 🙌" << COLOR_RESET << std::endl;
}
