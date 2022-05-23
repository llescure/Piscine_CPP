#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

int main()
{
    int             tab_size = 4;
    AAnimal          *tab[tab_size];
    int             index;
    std::cout << std::endl;

    index = 0;
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

    return 0;
}