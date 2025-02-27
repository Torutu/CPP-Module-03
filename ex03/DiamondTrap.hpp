#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// Define ANSI color codes
#define COLOR_BLUE "\033[94m"
#define COLOR_RESET "\033[0m"

class DiamondTrap : public ScavTrap, public FragTrap {
protected:
    std::string _name; // DiamondTrap's unique name
public:
    DiamondTrap(const std::string& name); // Constructor
    DiamondTrap(const DiamondTrap& other); // Copy Constructor
    DiamondTrap& operator=(const DiamondTrap& other); // Copy Assignment Operator
    ~DiamondTrap(); // Destructor

    void whoAmI();
    void attack(const std::string& target);
};

#endif
