#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{
    public:
    ClapTrap(std::string name = "ClapTrap");
    ClapTrap(std::string name, int hp, int ep, int damage);
    virtual ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName() const;
    
    private:
    std::string name;

    protected:
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;

};
#endif
