#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{
    public:
    //ClapTrap(std::string name);

    ClapTrap(std::string name, int hp = 10, int ep = 10, int damage = 0);
    ~ClapTrap()
    {
        std::cout << name
                << " finished. Hit Points: " << HitPoints
                << ". EnergyPoints: " << EnergyPoints
                << ". Attack Damage: " << AttackDamage << "\n";
    }
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName() {return name;}
    
    private:
    std::string name;

    protected:
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;

};
#endif