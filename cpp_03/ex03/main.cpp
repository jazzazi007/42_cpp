#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
int main ()
{
    ClapTrap clptrp("MH");
    FragTrap fragtrap;
    ScavTrap scavtrap;
    DiamondTrap diamondtrap("Diamond");

    clptrp.attack("JD");

    clptrp.takeDamage(11);

    clptrp.beRepaired(3);

    fragtrap.attack("JOOOO");
    fragtrap.takeDamage(12);
    fragtrap.beRepaired(5);

    scavtrap.guardGate();
    fragtrap.highFivesGuys();

    diamondtrap.whoAmI();
    diamondtrap.attack("JD");
    diamondtrap.takeDamage(12);
    diamondtrap.beRepaired(5);
    diamondtrap.guardGate();
    diamondtrap.highFivesGuys();



    return 0;
}
