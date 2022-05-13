#include "Zombie.hpp"

Zombie *Zombie::newZombie(const std::string name) const
{
    Zombie *new_zombie = new Zombie(name);
    return (new_zombie);
}