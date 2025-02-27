#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) { // Constructor
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {  // Copy Constructor
    std::cout << "ScavTrap copy constructor called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) { // Assignment operator
    if (this != &other) {
       this-> _name = other._name;
        this->_hitPoints = other._hitPoints;
       this-> _energyPoints = other._energyPoints;
       this-> _attackDamage = other._attackDamage;
    }
    std::cout << "ScavTrap " << _name << " assigned!" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() { // Destructor
    std::cout << "ScavTrap " << _name << " destructed!" << std::endl;
}

// Override attack()
void ScavTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ScavTrap " << _name << " viciously attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else if (_energyPoints <= 0) {
        std::cout << "ScavTrap " << _name << " has no energy left to attack!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " cannot attack as it is out of hit points!" << std::endl;
    }
}

// Special ability
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}