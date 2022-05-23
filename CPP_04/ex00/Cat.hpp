#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat: public Animal
{
    public: 

    Cat(void);
    virtual ~Cat(void);
    Cat(Cat const &src);

    Cat & operator=(Cat const &rhs);

    void    makeSound(void) const;
};

#endif