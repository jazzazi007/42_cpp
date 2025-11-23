#include "Zombie.hpp"

int main ()
{
    Zombie *zz;
    zz = zombieHorde(3,"Z1");
    for (int i = 0; i < 3; ++i)
        zz[i].announce();    // call announce() for each zombie
    delete[] zz;            // correct: match new[] with delete[]
    return 0;
}