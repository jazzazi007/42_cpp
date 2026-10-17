#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap:public ScavTrap, public FragTrap
{
    public:
    DiamondTrap(std::string name = "DiamondTrap");
    ~DiamondTrap();

    using ScavTrap::attack;
    void whoAmI();

    private:
    std::string name;
};
#endif
