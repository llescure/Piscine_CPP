#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "Character.hpp"

class ICharacter;

class AMateria
{
    protected:

    std::string   _type;

    public:

    AMateria(void);
    AMateria(std::string const & type);
    virtual ~AMateria(void);
    AMateria(AMateria const & src);
    
    std::string const & getType() const; //Returns the materia type

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

    AMateria & operator=(AMateria const &rhs);
};

#endif