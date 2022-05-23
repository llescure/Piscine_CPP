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

    boule->addIdea("I want to bury a bone", 0);
    boule->showIdeas();
    garfield->addIdea("I want to eat lasagna", 0);
    garfield->showIdeas();
    std::cout << std::endl;

    while (index < tab_size / 2)
    {
        tab[index] = new Cat();
        tab[index]->addIdea("What if I played with the toilet paper roll", 0);
        index++;
    }
    while (index < tab_size)
    {
        tab[index] = new Dog();
        tab[index]->addIdea("I want to go for a walk", 0);
        index++;
    }

    index = 0;
    std::cout << std::endl;
    while (index < tab_size)
    {
        tab[index]->makeSound();
        tab[index]->showIdeas();
        index++;
    }

    index = 0;
    std::cout << std::endl;
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