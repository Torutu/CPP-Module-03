#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap(); // Default constructor
    ScavTrap(const std::string& name);// Parameterized constructor
    ScavTrap(const ScavTrap& other);// Copy constructor
    ~ScavTrap();// Destructor
    ScavTrap& operator=(const ScavTrap& other);// Assignment operator

    void attack(const std::string& target) override; // Override attack()
    void guardGate(); // New special ability
};

#endif
