#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
    
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &src);
    ~DiamondTrap(void);

    DiamondTrap & operator=(DiamondTrap const &rhs);

    void    whoAmI(void);
    void    attack(const std::string &target);

    private:

    std::string     _name;
};

#endif