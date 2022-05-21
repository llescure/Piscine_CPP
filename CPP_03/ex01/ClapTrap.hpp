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
    int    getEnergyPoint(void);
    int    getHitPoint(void);
    int    getAttackDamage(void);
    void            setAttackDamage(unsigned int value);


    protected:
    
    std::string     _name;
    int    _hitPoint;
    int    _energyPoint;
    int    _attackDamage;
};

#endif