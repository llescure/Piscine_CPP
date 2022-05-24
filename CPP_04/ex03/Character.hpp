#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

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
    AMateria                    *getInventory(int const id) const;

    Character &operator=(Character const &rhs);
};

#endif