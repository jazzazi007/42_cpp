#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name)
{
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "ClapTrap "<< name << ". Hit Points: "<< this->HitPoints <<
                ". EnergyPoints: "<< this->EnergyPoints<< ". Attack Damage: "<< this->AttackDamage<<". \n";
}

void ClapTrap::attack(const std::string &target)
{
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
    int check = this->HitPoints - amount;
    if (check <=0)
        this->HitPoints = 0;
    if(this->HitPoints == 0)
    {
        std::cout << "Couldn't act, HP is zero \n";
        return;
    }
    this->HitPoints -= amount;
    std::cout << "Take Damage ClapTrap "<< name << ". Hit Points: "<< this->HitPoints <<
                ". EnergyPoints: "<< this->EnergyPoints<< ". Attack Damage: "<< this->AttackDamage<<". \n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
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

