#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

    ClapTrap *berry = nullptr;
    berry = new ScavTrap("Dingle Berry");
    berry->attack("self");
    berry->takeDamage(5);
    berry->beRepaired(3);
    delete berry;


    std::cout << std::endl;

    // FragTrap test
    FragTrap frag("Fraggy");
    frag.attack("Dummy");
    frag.takeDamage(50);
    frag.beRepaired(40);
    frag.highFivesGuys();

    std::cout << std::endl;

    // DiamondTrap test
    DiamondTrap diamond("Diamondy");
    diamond.attack("Dummy");
    diamond.takeDamage(50);
    diamond.beRepaired(40);
    diamond.whoAmI();

    return 0;
}
