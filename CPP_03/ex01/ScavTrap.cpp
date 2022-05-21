#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap basic constructor called" << std::endl;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    return ;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    return ;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
    return ;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->_hitPoint == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead. ";
        std::cout << "He or she can't attack anymore." << std::endl;
        return ;
    }
        if (this->_energyPoint == 0)
    {
        std::cout << "ScavTrap " << this->_name << " doesn't have any energy points left. ";
        std::cout << this->_name << " can't attack anymore." << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target;
    std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoint--;

}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode. You shall not pass" << std::endl; 
}