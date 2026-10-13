#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap{
    public:
    ScavTrap():ClapTrap("ScavTrap", 100, 50, 20)
    {};
    ~ScavTrap(){};

    void guardGate();

};

#endif 