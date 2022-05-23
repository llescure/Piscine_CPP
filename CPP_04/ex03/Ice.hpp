#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include <iostream>
#include "Materia.hpp"
#include "Character.hpp"

class Ice: public AMateria
{
    public:

    Ice(void);
    ~Ice(void);
    Ice(Ice const &src);

    Ice &operator=(Ice const &rhs);
    virtual Ice* clone() const;
    virtual void use(ICharacter& target);
}

#endif