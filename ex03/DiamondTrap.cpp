#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string& name)// Constructor
    : ClapTrap(name + "_clap_name"), // Initialize ClapTrap subobject
      ScavTrap(name),                // Initialize ScavTrap subobject
      FragTrap(name),                // Initialize FragTrap subobject
      _name(name) {                  // Initialize DiamondTrap's unique name
    std::cout << COLOR_BLUE << "DiamondTrap " << _name << " constructed!" << COLOR_RESET << std::endl;

    // Set attributes based on parent classes
    this->_hitPoints = FragTrap::_hitPoints;       // Hit points from FragTrap
    this->_energyPoints = ScavTrap::_energyPoints; // Energy points from ScavTrap
    this->_attackDamage = FragTrap::_attackDamage; // Attack damage from FragTrap
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)// Copy Constructor
    : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name) {
    std::cout << COLOR_BLUE << "DiamondTrap " << _name << " copy constructed!" << COLOR_RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {// Copy Assignment Operator
    std::cout << COLOR_BLUE << "DiamondTrap " << _name << " copy assigned!" << COLOR_RESET << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other); // Assign ClapTrap part
        ScavTrap::operator=(other); // Assign ScavTrap part
        FragTrap::operator=(other); // Assign FragTrap part
        _name = other._name;        // Assign DiamondTrap's unique name
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {// Destructor
    std::cout << COLOR_BLUE << "DiamondTrap " << _name << " destructed!" << COLOR_RESET << std::endl;
}

void	DiamondTrap::attack(const std::string &target){
	ScavTrap::attack(target);
}

// Special function
void DiamondTrap::whoAmI() const {
    std::cout << COLOR_BLUE << "I am " << _name << ", and my ClapTrap name is " << ClapTrap::_name << COLOR_RESET << std::endl;
}