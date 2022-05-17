#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "iostream"

int main(void)
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    std::cout << std::endl;
    
    Weapon club2 = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club2);
    jim.attack();
    club2.setType("some other type of club");
    jim.attack();
    std::cout << std::endl;

    HumanB elsa("Elsa");
    elsa.attack();
    elsa.setWeapon(club2);
    club2.setType("golf club");
    elsa.attack();

    return 0;
}