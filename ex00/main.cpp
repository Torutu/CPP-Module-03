#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("Clappy"); // Create a ClapTrap
    std::cout << "Energy points left: " << clap.getEnergyPoints() << std::endl;
    clap.attack("Bandit");// Attack a target
    std::cout << "Energy points left: " << clap.getEnergyPoints() << std::endl;
    clap.takeDamage(2);// Take damage
    clap.beRepaired(1);// Repair itself
    std::cout << "Energy points left: " << clap.getEnergyPoints() << std::endl;
    for (int i = 0; i < 5; ++i) { // Test energy depletion
        clap.attack("Dummy");
        std::cout << "Energy points left: " << clap.getEnergyPoints() << std::endl;
    }
    clap.beRepaired(3);// Try to repair or attack when out of energy
    clap.attack("Dummy");

    return 0;
}
