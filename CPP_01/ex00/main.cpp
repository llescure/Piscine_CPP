#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    Zombie test("toto");

    test.announce();
    test.randomChump("Brain Eater");
    Zombie *test2 = test.newZombie("Eye Eater");
    (*test2).announce();
    return 0;
}