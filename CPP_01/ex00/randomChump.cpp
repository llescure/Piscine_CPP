#include "Zombie.hpp"

void    Zombie::randomChump(const std::string name) const
{
    Zombie new_zombie(name);
    new_zombie.announce();
}