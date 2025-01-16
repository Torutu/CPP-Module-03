#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define COLOR_RED "\033[31m"  // 214 is a shade close to orange

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap(const std::string& name);
    ~ScavTrap();

    void attack(const std::string& target); // Override attack()
    void guardGate(); // New special ability
};

#endif
