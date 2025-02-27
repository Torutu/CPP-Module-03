#include "ScavTrap.hpp"
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << COLOR_RED << "ScavTrap " << _name << " constructed!" << COLOR_RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << COLOR_RED << "ScavTrap " << _name << " copy constructed!" << COLOR_RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    std::cout << COLOR_RED << "ScavTrap " << _name << " copy assigned!" << COLOR_RESET << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << COLOR_RED << "ScavTrap " << _name << " destructed!" << COLOR_RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
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
    std::cout << COLOR_RED << "ScavTrap " << _name << " is now in Gate keeper mode!" << COLOR_RESET << std::endl;
}
