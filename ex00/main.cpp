#include "ClapTrap.hpp"

int main() {
    // Create a ClapTrap
    ClapTrap clap("Clappy");
    std::cout << "Energy points left: " << clap.getEnergyPoints() << std::endl;
    // Attack a target
    clap.attack("Bandit");
    std::cout << "Energy points left: " << clap.getEnergyPoints() << std::endl;
    // Take damage
    clap.takeDamage(2);
    // Repair itself
    clap.beRepaired(1);
    std::cout << "Energy points left: " << clap.getEnergyPoints() << std::endl;
    // Test energy depletion
    for (int i = 0; i < 5; ++i) {
        clap.attack("Dummy");
        std::cout << "Energy points left: " << clap.getEnergyPoints() << std::endl;
    }
    // Try to repair or attack when out of energy
    clap.beRepaired(3);
    clap.attack("Dummy");

    return 0;
}
