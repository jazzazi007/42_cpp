#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main ()
{
    ClapTrap clptrp("MH");
    FragTrap fragtrap;
    ScavTrap scavtrap;

    clptrp.attack("JD");

    clptrp.takeDamage(11);

    clptrp.beRepaired(3);

    fragtrap.attack("JOOOO");
    fragtrap.takeDamage(12);
    fragtrap.beRepaired(5);

    scavtrap.guardGate();
    fragtrap.highFivesGuys();



    return 0;
}