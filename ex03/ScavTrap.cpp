#include "ScavTrap.hpp"
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    // Using COLOR_RED and COLOR_RESET macros
    std::cout << COLOR_RED << "ScavTrap " << _name << " constructed!" << COLOR_RESET << std::endl;
}

ScavTrap::~ScavTrap() {
    // Using COLOR_RED and COLOR_RESET macros
    std::cout << COLOR_RED << "ScavTrap " << _name << " destructed!" << COLOR_RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        // Using COLOR_RED and COLOR_RESET macros
        std::cout << COLOR_RED << "ScavTrap " << _name << " viciously attacks " << target 
                  << ", causing " << _attackDamage << " points of damage!" << COLOR_RESET << std::endl;
        _energyPoints--;
    } else if (_energyPoints <= 0) {
        std::cout << COLOR_RED << "ScavTrap " << _name << " has no energy left to attack!" << COLOR_RESET << std::endl;
    } else {
        std::cout << COLOR_RED << "ScavTrap " << _name << " cannot attack as it is out of hit points!" << COLOR_RESET << std::endl;
    }
}

void ScavTrap::guardGate() {
    // Using COLOR_RED and COLOR_RESET macros
    std::cout << COLOR_RED << "ScavTrap " << _name << " is now in Gate keeper mode!" << COLOR_RESET << std::endl;
}
