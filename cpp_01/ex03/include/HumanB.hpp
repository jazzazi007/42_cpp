#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>


class HumanB
{
    public:
        HumanB(const std::string &name) : name(name), weapon(*(new Weapon("unarmed"))) {};
        ~HumanB();
        void attack() const;
        void setWeapon(Weapon &weapon) { this->weapon = weapon; }

    private:
        std::string name;
        Weapon &weapon;
};
#endif 