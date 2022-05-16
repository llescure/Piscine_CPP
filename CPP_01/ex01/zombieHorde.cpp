#include "Zombie.hpp"

Zombie  *Zombie::zombieHorde(int N, std::string name)
{
    int i;

    i = 0;
    Zombie *horde = new Zombie[N];
    while (i < N)
    {
        horde[i].setName(name);
    }
    return (horde);
}