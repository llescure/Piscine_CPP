#include "Zombie.hpp"
#include <iostream>

void    randomChump(const std::string name);
Zombie *newZombie(const std::string name);

int main(void)
{
    Zombie  test("toto");
    Zombie  *test2;

// Classic zombie with constructor 
    test.announce();

// Zombie created using Zombie constructor
    randomChump("Brain Eater");

// Zombie created with dynamic memory allocation
    test2 = newZombie("Eye Eater");
    (*test2).announce();
    delete(test2);
    return 0;
}