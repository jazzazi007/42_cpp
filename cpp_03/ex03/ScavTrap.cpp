#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap " << name << " created.\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->getName() << " finished.\n";
}

void ScavTrap::attack(const std::string &target)
{
    if (this->HitPoints == 0)
    {
        std::cout << "Couldn't act, HP is zero \n";
        return;
    }
    if (this->EnergyPoints == 0)
    {
        std::cout << "Couldn't act, EP is zero \n";
        return;
    }
    this->EnergyPoints --;
    std::cout << "ScavTrap " << this->getName() << " attacks " << target
              << " causing " << this->AttackDamage << " points of damage!\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode.\n";
}
