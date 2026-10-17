#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap " << name << " created.\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->getName() << " finished.\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " requests a high five!\n";
}
