#include "Zombie.hpp"

int main ()
{
    Zombie *zz;
    zz = newZombie("Z1");
    zz->announce();
    randomChump("Z2");
    delete zz;
    return 0;
}