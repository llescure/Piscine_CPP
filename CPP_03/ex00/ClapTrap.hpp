#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public:

    ClapTrap(void);
    ClapTrap(const std::string name);
    ClapTrap(ClapTrap const & src);
    ~ClapTrap(void);

    ClapTrap &operator=(ClapTrap const & rhs);

    void            attack(const std::string & target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    unsigned int    getEnergyPoint(void);
    unsigned int    getHitPoint(void);


    private:
    
    std::string     _name;
    unsigned int    _hitPoint;
    unsigned int    _energyPoint;
    unsigned int    _attackDamage;
};

#endif