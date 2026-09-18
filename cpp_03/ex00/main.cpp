#include "ClapTrap.hpp"

int main ()
{
    ClapTrap clptrp("MH");

    clptrp.attack("JD");

    clptrp.takeDamage(11);

    clptrp.beRepaired(3);

    for (int i = 0; i<10; i++)
    {
        clptrp.attack("JO");
    }


    return 0;
}