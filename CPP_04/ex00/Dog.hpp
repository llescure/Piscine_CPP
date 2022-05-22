#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>

class Dog : public Animal
{
    public:

    Dog(void);
    Dog(Dog const &src);
    ~Dog(void);

    Dog & const(Dog const &rhs);
};

#endif