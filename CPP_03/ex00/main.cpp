#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap pikatchu("Pikatchu");
    ClapTrap rondoudou("Rondoudou");

    pikatchu.setAttackDamage(2);
    pikatchu.attack("Rondoudou");
    rondoudou.takeDamage(pikatchu.getAttackDamage());
    rondoudou.beRepaired(1);

    std::cout << std::endl;
    rondoudou.setAttackDamage(10);
    rondoudou.attack("Pikatchu");
    pikatchu.takeDamage(rondoudou.getAttackDamage());
    pikatchu.attack("Rondoudou");
    rondoudou.attack("Pikatchu");
    pikatchu.takeDamage(rondoudou.getAttackDamage());

    return (0);
}