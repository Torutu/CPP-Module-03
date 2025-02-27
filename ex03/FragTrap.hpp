#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define COLOR_GREEN "\033[32m"

class FragTrap : virtual public ClapTrap {
public:
FragTrap(const std::string& name);  // Constructor
~FragTrap(); // Destructor
FragTrap(const FragTrap& other); // Copy constructor
FragTrap& operator=(const FragTrap& other); // Assignment operator
void highFivesGuys(); // New special ability
};

#endif
