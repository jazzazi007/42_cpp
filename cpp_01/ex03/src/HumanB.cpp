#include "../include/HumanB.hpp"

HumanB::~HumanB(){}

void HumanB::attack() const
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
