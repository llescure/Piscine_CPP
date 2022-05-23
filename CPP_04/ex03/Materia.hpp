#ifndef MATERIA_HPP
# define MATERIA_HPP

#include <iostream>
#include <string>
#include "Character.hpp"

class AMateria
{
    protected:

    std::string const   _type;

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