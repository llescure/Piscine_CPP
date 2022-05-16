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
    void        setName(const std::string name);
    Zombie      *zombieHorde(int N, std::string name);

    private:
    std::string     _name;
};

#endif