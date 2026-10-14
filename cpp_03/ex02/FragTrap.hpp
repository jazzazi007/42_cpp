#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap{
    public:

    FragTrap():ClapTrap("Frag", 100, 100, 30){};
    void highFivesGuys(void);

    ~FragTrap(){};

};
#endif