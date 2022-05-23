#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
    public:

    AAnimal(AAnimal const &src);
    virtual ~AAnimal(void);

    AAnimal & operator=(AAnimal const &rhs);

    virtual void        makeSound(void) const = 0;
    virtual void        addIdea(const std::string idea, const int id) const = 0;
    virtual void        showIdeas(void) const = 0;
    const std::string   getType(void) const;


    protected:

    std::string _type;

    AAnimal(void);
};

#endif