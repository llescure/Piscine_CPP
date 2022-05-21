#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap    pikatchu("Pikatchu");
    ScavTrap    rondoudou("Rondoudou");
    FragTrap    salameche("Salameche");
    
    std::cout << std::endl;
    pikatchu.setAttackDamage(2);
    pikatchu.attack("Rondoudou");
    rondoudou.takeDamage(pikatchu.getAttackDamage());
    rondoudou.beRepaired(1);

    std::cout << std::endl;
    rondoudou.attack("Pikatchu");
    pikatchu.takeDamage(rondoudou.getAttackDamage());
    rondoudou.guardGate();

    std::cout << std::endl;
    salameche.attack("Rondoudou");
    rondoudou.takeDamage(salameche.getAttackDamage());
    rondoudou.attack("Salameche");
    salameche.takeDamage(rondoudou.getAttackDamage());
    salameche.beRepaired(1);
    salameche.highFivesGuys();
    std::cout << std::endl;

    return (0);
}