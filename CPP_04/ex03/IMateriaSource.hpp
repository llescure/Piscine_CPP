#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class IMateriaSource
{
    public:

    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;

    AMateria    *getInventory(int const id) const;

    protected:

    AMateria    *_inventory[4];
};

#endif