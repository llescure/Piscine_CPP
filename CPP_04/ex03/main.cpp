#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    /* DISPLAY CONSTRUCTOR */
    IMateriaSource *src = new MateriaSource();
    std::cout << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    std::cout << std::endl;
    ICharacter *me = new Character("me");
    std::cout << std::endl;
    AMateria *tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    /* ERROR MANAGEMENT */
    tmp = src->createMateria("lol");
    me->equip(tmp);

    std::cout << std::endl;
    ICharacter *bob = new Character("bob");

    std::cout << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(3, *bob);
    me->use(-6, *bob);
    std::cout << std::endl;
    me->unequip(0);
    me->unequip(1);
    me->use(0, *bob);
    std::cout << std::endl;

    /* DISPLAY DESTRUCTOR */
    delete bob;
    delete me;
    delete src;
    return 0;
}