#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name; // DiamondTrap's unique name
public:
    DiamondTrap(); // Default constructor
    DiamondTrap(const std::string& name); // Parameterized constructor
    DiamondTrap(const DiamondTrap& other); // Copy constructor
    DiamondTrap& operator=(const DiamondTrap& other); // Copy assignment operator
    ~DiamondTrap(); // Destructor

    void whoAmI();
    void attack(const std::string& target)override;
};

#endif
