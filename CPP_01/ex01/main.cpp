#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
    Zombie  *test;
    int     i;
    
    i = 0;
    test = zombieHorde(10, "Brain Eater");
    while (i < 10)
    {
        test[i].announce();
        i++;
    }
    delete[] test;
    return 0;
}