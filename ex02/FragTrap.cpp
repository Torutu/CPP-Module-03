#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) { // Constructor
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " constructed!" << std::endl;
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

FragTrap::~FragTrap() { // Destructor
    std::cout << "FragTrap " << _name << " destructed!" << std::endl;
}

void FragTrap::highFivesGuys() { 
    std::cout << "FragTrap " << _name << " requests a high five! 🙌" << std::endl;
}
