#include "ClapTrap.hpp"
#include <iostream>

// Constructor
ClapTrap::ClapTrap(const std::string& name)
    : _name(name), _hitPoints(10), _energyPoints(50), _attackDamage(5) {
    std::cout << COLOR_ORANGE << "ClapTrap " << _name << " has been created!" << COLOR_RESET << std::endl;
}

// Copy Constructor
ClapTrap::ClapTrap(const ClapTrap& other)
    : _name(other._name), _hitPoints(other._hitPoints),
      _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {
    std::cout << COLOR_ORANGE << "ClapTrap " << _name << " has been copied!" << COLOR_RESET << std::endl;
}

// Destructor
ClapTrap::~ClapTrap() {
    std::cout << COLOR_ORANGE << "ClapTrap " << _name << " has been destroyed!" << COLOR_RESET << std::endl;
}

// Copy Assignment Operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << COLOR_ORANGE << "ClapTrap " << _name << " has been assigned!" << COLOR_RESET << std::endl;
    return *this;
}

int ClapTrap::getEnergyPoints() const {
    return _energyPoints;
}

// Attack function
void ClapTrap::attack(const std::string& target) {
    if (_hitPoints == 0 || _energyPoints == 0) {
        std::cout << COLOR_ORANGE << "ClapTrap " << _name
                  << " cannot attack due to insufficient hit points or energy!" << COLOR_RESET << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << COLOR_ORANGE << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << COLOR_RESET << std::endl;
}

// Take damage function
void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints == 0) {
        std::cout << COLOR_ORANGE << "ClapTrap " << _name << " is already destroyed!" << COLOR_RESET << std::endl;
        return;
    }
    _hitPoints = (amount >= _hitPoints) ? 0 : (_hitPoints - amount);
    std::cout << COLOR_ORANGE << "ClapTrap " << _name << " takes " << amount
              << " points of damage! Hit points left: " << _hitPoints << COLOR_RESET << std::endl;
}

// Repair function
void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints == 0 || _energyPoints == 0) {
        std::cout << COLOR_ORANGE << "ClapTrap " << _name
                  << " cannot repair due to insufficient hit points or energy!" << COLOR_RESET << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << COLOR_ORANGE << "ClapTrap " << _name << " repairs itself for " << amount
              << " hit points! Hit points now: " << _hitPoints << COLOR_RESET << std::endl;
}
