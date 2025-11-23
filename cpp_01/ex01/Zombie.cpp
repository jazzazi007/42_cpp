#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "creat "<<_name<<std::endl;
}

Zombie::~Zombie()
{
    std::cout << "EOL "<<_name<<"\n";
}
