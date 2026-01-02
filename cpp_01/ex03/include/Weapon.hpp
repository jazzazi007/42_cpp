#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <vector>
#include <string>

class Weapon{
    public:

    Weapon(std::string weapon);
    ~Weapon();
    std::string getType() const { return weapon; }
    void setType(std::string type) { weapon = type; }

    private:
        std::string weapon;
};
#endif