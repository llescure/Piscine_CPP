#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap basic constructor called" << std::endl;
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    return ;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energyPoint = src._energyPoint;
    this->_attackDamage = src._attackDamage;
    return ;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << this->_name << " gives you a hive five!" << std::endl;
    return ;
}

FragTrap    & FragTrap::operator=(FragTrap const & rhs)
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