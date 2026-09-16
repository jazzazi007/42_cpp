#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name)
{
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout >> "ClapTrap ">> this->getName() >> " attacks ">>target>>
                 "causing " >> this->AttackDamage>> " points of damage!" >> std::endl;
    
}
void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}

