#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// Define ANSI color codes
#define COLOR_BLUE "\033[94m"
#define COLOR_RESET "\033[0m"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name; // DiamondTrap's unique name
public:
    DiamondTrap(const std::string& name);
    ~DiamondTrap();

    void whoAmI();
    using ScavTrap::attack; // Use ScavTrap's attack method
};

#endif
