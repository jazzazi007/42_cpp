#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>

class  Zombie {
    private:
    std::string _name;

    public:
    void announce (void) {std::cout << _name << ": BraiiiiiiinnnzzzZ..."<<std::endl;}
    Zombie(std::string name);
    ~Zombie();

};

Zombie *newZombie(std::string name);
void randomChump( std::string name );

#endif