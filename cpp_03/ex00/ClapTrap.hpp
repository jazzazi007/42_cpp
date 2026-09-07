#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{
    public:
    ClapTrap(std::string name) : Name(name) {};
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    private:
    std::string Name;
    int HitPoints = 10;
    int EnergyPoints = 10;
    int AttackDamage = 0;

};
#endif