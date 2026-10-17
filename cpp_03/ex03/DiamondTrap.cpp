#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
    // FragTrap sets the hit points and damage; ScavTrap supplies the energy value.
    this->EnergyPoints = 50;
    std::cout << "DiamondTrap " << name << " created. Hit Points: " << this->HitPoints
              << ". EnergyPoints: " << this->EnergyPoints
              << ". Attack Damage: " << this->AttackDamage << "\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " finished.\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << name
              << ". ClapTrap name: " << ClapTrap::getName() << "\n";
}
