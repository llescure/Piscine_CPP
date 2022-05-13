#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public: 
    Zombie(std::string name);
    ~Zombie(void);

    void        announce(void) const;
    Zombie      *newZombie(const std::string name) const;
    void        randomChump(const std::string name) const;

    private:
    std::string     _name;
};

#endif