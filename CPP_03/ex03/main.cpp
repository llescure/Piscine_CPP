#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    FragTrap    salameche("Salameche");
    DiamondTrap carapuce("Carapuce");
    
    std::cout << std::endl;
    carapuce.whoAmI();
    carapuce.attack("Salameche");
    std::cout << "Carapuce has " << carapuce.getEnergyPoint() << " points of energy" << std::endl;
    std::cout << "Salameche has " << salameche.getEnergyPoint() << " points of energy" << std::endl;
    std::cout << std::endl;

    return (0);
}