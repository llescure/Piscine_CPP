#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    public:

    Animal(void);
    Animal(Animal const &src);
    ~Animal(void);

    Animal & operator=(Animal const &rhs);

    protected:

    std::string _type;
};

#endif