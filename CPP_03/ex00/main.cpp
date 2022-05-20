#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap pikatchu("Pikatchu");
    while (pikatchu.getEnergyPoint() > 0 && pikatchu.getHitPoint() > 0)
    {
        pikatchu.attack("rondoudou");
    }

    return (0);
}