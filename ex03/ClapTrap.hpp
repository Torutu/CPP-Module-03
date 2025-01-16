#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

// Define ANSI color codes
#define COLOR_ORANGE "\033[38;5;214m"  // 214 is a shade close to orange
#define COLOR_RESET "\033[0m"

class ClapTrap {
protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
    // Constructors and Destructor
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& other);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap& other);

    // Member functions
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    int getEnergyPoints() const;
};

#endif
