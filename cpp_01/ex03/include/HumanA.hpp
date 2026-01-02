#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>


class HumanA
{
    public:
        HumanA(const std::string &name, Weapon &Weapon);
        ~HumanA();
        void attack() const;

    private:
        std::string name;
        Weapon &weapon;
};
#endif 