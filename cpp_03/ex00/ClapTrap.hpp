#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{
    public:
    ClapTrap(std::string name);
    ~ClapTrap(){};
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    /*int getHitPoints() {return this->HitPoints;}
    int getEnergyPoints() {return this->EnergyPoints;}
    int getAttackDamage() {return this->AttackDamage;}
    */
    std::string getName() {return name;}
    private:
    std::string name;
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;

};
#endif