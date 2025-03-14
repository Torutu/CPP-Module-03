#include "ClapTrap.hpp"
#include"ScavTrap.hpp"

int main() {
    // ClapTrap test
    ClapTrap clap("Clappy");
    clap.attack("Dummy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << std::endl;

    ClapTrap *berry = nullptr; // Pointer to ClapTrap
    berry = new ScavTrap("Dingle Berry"); // Upcasting
    berry->attack("self"); // Call to derived class function
    berry->takeDamage(5); // Call to base class function
    berry->beRepaired(3); // Call to base class function
    delete berry;

    std::cout << std::endl;
    // ScavTrap test
    ScavTrap scav("Scavvy");
    scav.attack("Dummy");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << std::endl;

    return 0;
}
