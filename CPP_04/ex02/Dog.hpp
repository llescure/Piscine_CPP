#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    public:

    Dog(void);
    Dog(Dog const & src);
    virtual ~Dog(void);

    Dog & operator=(Dog const & rhs);

    virtual void    makeSound(void) const;
    virtual void    addIdea(const std::string idea, const int id) const;
    virtual void    showIdeas(void) const;


    private:

    Brain *_attribute;
};

#endif