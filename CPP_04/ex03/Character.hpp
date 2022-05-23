#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

class ICharacter
{
    public:
    
    virtual ~ICharacter() {}
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};

class Character: public ICharacter
{
    public:

    Character(void);
    Character(Character const &src);
    ~Character(void);

    virtual std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, Character &target);


    Character &operator=(Character const &rhs);
}

#endif