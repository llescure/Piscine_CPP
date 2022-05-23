#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    public: 

    Cat(void);
    virtual ~Cat(void);
    Cat(Cat const &src);

    Cat & operator=(Cat const &rhs);

    virtual void    makeSound(void) const;
    virtual void    addIdea(const std::string idea) const;


    private:

    Brain *_attribute;
};

#endif