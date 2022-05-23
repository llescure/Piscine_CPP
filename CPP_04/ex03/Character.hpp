#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "Materia.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
    public:

    Character(std::string name);
    Character(Character const &src);
    virtual ~Character(void);

    virtual std::string const   &getName() const;
    virtual void                equip(AMateria *m);
    virtual void                unequip(int idx);
    virtual void                use(int idx, ICharacter &target);

    Character &operator=(Character const &rhs);
};

#endif