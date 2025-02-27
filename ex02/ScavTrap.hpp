#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap(const std::string& name); //Constructor
    ScavTrap(const ScavTrap& other);// Copy Constructor
    ScavTrap& operator=(const ScavTrap& other); // Copy Assignment Operator
    ~ScavTrap(); // Destructor
    void attack(const std::string& target);// Override attack() from ClapTrap
    void guardGate();// New special ability
};

#endif