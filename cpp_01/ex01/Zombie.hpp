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
    Zombie() : _name("") {}
    ~Zombie();
    void setName (std::string name) {this->_name = name;}
    std::string getName (void) {return this->_name;}

};

Zombie *newZombie(std::string name);
void randomChump( std::string name );

Zombie* zombieHorde(int N, std::string name);

#endif