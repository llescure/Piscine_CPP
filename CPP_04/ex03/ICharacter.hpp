#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include <string>
#include "Materia.hpp"

class AMateria;

class ICharacter
{
    public:
    
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void                equip(AMateria *m) = 0;
    virtual void                unequip(int idx) = 0;
    virtual void                use(int idx, ICharacter &target) = 0;
    virtual AMateria            *getInventory(int const id) const = 0;
    virtual AMateria            *getDeleted(int const id) const = 0;

    
    protected:

    AMateria    *_inventory[4];
    AMateria    *_deleted[4];
    std::string _name;
};

#endif