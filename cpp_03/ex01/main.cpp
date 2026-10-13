#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main ()
{
    ClapTrap clptrp("MH");
    ScavTrap scavtrap;

    clptrp.attack("JD");

    clptrp.takeDamage(11);

    clptrp.beRepaired(3);

    scavtrap.guardGate();


    return 0;
}