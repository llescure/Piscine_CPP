#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include <iostream>
#include "Materia.hpp"
#include "Character.hpp"

class Cure: public AMateria
{
    public:

    Cure(void);
    ~Cure(void);
    Cure(Cure const &src);

    Cure &operator=(Cure const &rhs);
    virtual Cure* clone() const;
    virtual void use(ICharacter& target);

};

#endif