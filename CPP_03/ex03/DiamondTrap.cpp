#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap basic constructor called" << std::endl;
    this->_energyPoint = 50;
    this->_hitPoint = FragTrap::_hitPoint;
    this->_attackDamage = FragTrap::_attackDamage;
    return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->_name = name;
    this->_energyPoint = 50;
    this->_hitPoint = FragTrap::_hitPoint;
    this->_attackDamage = FragTrap::_attackDamage;
    return ;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
    this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energyPoint = src._energyPoint;
    this->_attackDamage = src._attackDamage;
    return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs)
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

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My name is: " << this->_name << std::endl;
    std::cout << "My ClapTrap name is: " << ClapTrap::_name << std::endl;

}