#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap basic constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap basic constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Copy constructor called" << std::endl;

    this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energyPoint = src._energyPoint;
    this->_attackDamage = src._attackDamage;

    return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoint = rhs._hitPoint;
        this->_energyPoint = rhs._energyPoint;
        this->_attackDamage = rhs._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
    return ;
}

void    ClapTrap::attack(const std::string & target)
{
    if (this->_hitPoint == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead. ";
        std::cout << "He or she can't attack anymore." << std::endl;
        return ;
    }
        if (this->_energyPoint == 0)
    {
        std::cout << "ClapTrap " << this->_name << " doesn't have any energy points left. ";
        std::cout << this->_name << " can't attack anymore." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target;
    std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoint--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoint == 0)
    {
        std::cout << this->_name << " is already dead." << std::endl;
        return ;
    }
    std::cout << this->_name << " sustains " << amount;
    std::cout << " points of damage." << std::endl;
    this->_hitPoint -= amount;
    if (this->_hitPoint < 0)
    {
        this->_hitPoint = 0;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoint == 0)
    {
        std::cout << this->_name << " doesn't have any energy points left." << std::endl;
        std::cout << this->_name << " can't heal himself." << std::endl;
        return ;
    }
    std::cout << this->_name << " got " << amount;
    std::cout << " points of health back." << std::endl;
    this->_energyPoint--;
    this->_hitPoint += amount;
}

int    ClapTrap::getEnergyPoint(void)
{
    return (this->_energyPoint);
}

int    ClapTrap::getHitPoint(void)
{
    return (this->_hitPoint);
}

int    ClapTrap::getAttackDamage(void)
{
    return (this->_attackDamage);
}

void            ClapTrap::setAttackDamage(unsigned int value)
{
    this->_attackDamage = value;
}