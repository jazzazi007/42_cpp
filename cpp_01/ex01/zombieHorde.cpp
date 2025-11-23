#include "Zombie.hpp"
/*Turn-in directory: ex01/
Files to turn in: Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp,
zombieHorde.cpp
Forbidden functions: None

Time to create a horde of Zombies!
Implement the following function in the appropriate file:
Zombie* zombieHorde( int N, std::string name );
It must allocate N Zombie objects in a single allocation. Then, it must initialize the
zombies, giving each of them the name passed as a parameter. The function returns a
pointer to the first zombie.

Implement your own tests to ensure that your zombieHorde() function works as ex-
pected. Try calling announce() for each of the zombies.*/

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;
    Zombie* horde = new Zombie[N];     // single allocation
    for (int i = 0; i < N; ++i)
        horde[i].setName(name);
    return horde;
}