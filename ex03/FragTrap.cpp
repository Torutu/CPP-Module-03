#include "FragTrap.hpp"

// Define macros for green and reset
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    // Using GREEN and RESET macros
    std::cout << COLOR_GREEN << "FragTrap " << _name << " constructed!" << COLOR_RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) { // Copy constructor
    std::cout << "FragTrap " << _name << " copied!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) { // Assignment operator
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "FragTrap " << _name << " assigned!" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    // Using GREEN and RESET macros
    std::cout << COLOR_GREEN << "FragTrap " << _name << " destructed!" << COLOR_RESET << std::endl;
}

void FragTrap::highFivesGuys() {
    // Using GREEN and RESET macros
    std::cout << COLOR_GREEN << "FragTrap " << _name << " requests a high five! 🙌" << COLOR_RESET << std::endl;
}
