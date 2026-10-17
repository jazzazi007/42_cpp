#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name)
{
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "ClapTrap "<< name << ". Hit Points: "<< this->HitPoints <<
                ". EnergyPoints: "<< this->EnergyPoints<< ". Attack Damage: "<< this->AttackDamage<<". \n";
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int damage)
    : name(name), HitPoints(hp), EnergyPoints(ep), AttackDamage(damage)
{
    std::cout << "ClapTrap " << name
              << ". Hit Points: " << HitPoints
              << ". EnergyPoints: " << EnergyPoints
              << ". Attack Damage: " << AttackDamage << "\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name
              << " finished. Hit Points: " << HitPoints
              << ". EnergyPoints: " << EnergyPoints
              << ". Attack Damage: " << AttackDamage << "\n";
}

std::string ClapTrap::getName() const
{
    return name;
}

void ClapTrap::attack(const std::string &target)
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
    std::cout << "ClapTrap "<< this->getName() << " attacks "<<target<<
                 " causing " << this->AttackDamage<< " points of damage!" << "\n";
    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->HitPoints == 0)
    {
        std::cout << "Couldn't act, HP is zero \n";
        return;
    }
    if (amount >= static_cast<unsigned int>(this->HitPoints))
        this->HitPoints = 0;
    else
        this->HitPoints -= amount;
    std::cout << "Take Damage ClapTrap "<< name << ". Hit Points: "<< this->HitPoints <<
                ". EnergyPoints: "<< this->EnergyPoints<< ". Attack Damage: "<< this->AttackDamage<<". \n";
}

void ClapTrap::beRepaired(unsigned int amount)
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
    this->HitPoints += amount;
    this->EnergyPoints -= 1;
    std::cout << "Be Repaired ClapTrap "<< name << ". Hit Points: "<< this->HitPoints <<
                ". EnergyPoints: "<< this->EnergyPoints<< ". Attack Damage: "<< this->AttackDamage<<". \n";

}

