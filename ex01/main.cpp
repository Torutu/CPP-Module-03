#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // ClapTrap test
    ClapTrap clap("Clappy");
    clap.attack("Dummy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << std::endl;

    // ScavTrap test
    ScavTrap scav("Scavvy");
    scav.attack("Dummy");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << std::endl;

    // Proper destruction chaining
    return 0;
}
