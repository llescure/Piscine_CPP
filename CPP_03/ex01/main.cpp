#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap pikatchu("Pikatchu");
    ScavTrap rondoudou("Rondoudou");
    
    std::cout << std::endl;
    pikatchu.setAttackDamage(2);
    pikatchu.attack("Rondoudou");
    rondoudou.takeDamage(pikatchu.getAttackDamage());
    rondoudou.beRepaired(1);

    std::cout << std::endl;
    rondoudou.attack("Pikatchu");
    pikatchu.takeDamage(rondoudou.getAttackDamage());
    pikatchu.attack("Rondoudou");
    rondoudou.guardGate();
    std::cout << std::endl;

    return (0);
}