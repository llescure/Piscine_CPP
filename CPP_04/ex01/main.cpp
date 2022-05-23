#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

int main()
{
    const Animal    *boule = new Dog();
    const Animal    *garfield = new Cat();
    int             tab_size = 4;
    Animal          *tab[tab_size];
    int             index;
    std::cout << std::endl;

    index = 0;

    boule->addIdea("I want to go for a walk");
    garfield->addIdea("What if I played with the toilet paper roll");

    while (index < tab_size / 2)
    {
        tab[index] = new Cat();
        index++;
    }
    while (index < tab_size)
    {
        tab[index] = new Dog();
        index++;
    }

    index = 0;
    while (index < tab_size)
    {
        tab[index]->makeSound();
        index++;
    }

    index = 0;
    while (index < tab_size)
    {
        delete tab[index];
        index++;
    }

    std::cout << std::endl;
    delete boule;
    delete garfield;

    return 0;
}