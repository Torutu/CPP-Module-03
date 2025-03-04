#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap()
    : ClapTrap("Default_clap_name"),
      ScavTrap(),
      FragTrap(),
      _name("Default") {

    // Set attributes based on parent classes
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;

    std::cout << "DiamondTrap " << _name << " constructed!" << std::endl;
}

// Parameterized constructor
DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"),
      ScavTrap(),
      FragTrap(),
      _name(name) {

    // Set attributes based on parent classes
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;

    std::cout << "DiamondTrap " << _name << " constructed!" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name) {
    std::cout << "DiamondTrap " << _name << " copied!" << std::endl;
}

// Copy assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        _name = other._name;
    }
    std::cout << "DiamondTrap " << _name << " assigned!" << std::endl;
    return *this;
}

// Destructor
DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " destructed!" << std::endl;
}

// Unique function
void DiamondTrap::whoAmI() {
    std::cout << "I am " << _name << ", and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

// Override attack
void DiamondTrap::attack(const std::string& target) {
    this->ClapTrap::_name = this->_name; // Set ClapTrap's name to DiamondTrap's name
    ScavTrap::attack(target); // Use ScavTrap's attack
}