#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    
    std::cout << std::endl;
    std::cout << "Type of j variable: " << j->getType() << " " << std::endl;
    std::cout << "Type of i variable: " << i->getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << "I makes sound" << std::endl;
    i->makeSound(); // will output the cat sound!
    std::cout << "J makes sound" << std::endl;
    j->makeSound();
    std::cout << "Meta makes sound" << std::endl;
    meta->makeSound();

    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;

    const   WrongAnimal *test = new WrongAnimal();
    const   WrongAnimal *test1 = new WrongCat();

    std::cout << std::endl;
    std::cout << "Type of test variable: " << test->getType() << " " << std::endl;
    std::cout << "Type of test1 variable: " << test1->getType() << " " << std::endl;
    std::cout << std::endl;
    std::cout << "Test makes sound" << std::endl;
    test->makeSound(); // will output the cat sound!
    std::cout << "Test1 makes sound" << std::endl;
    test1->makeSound();
    
    std::cout << std::endl;
    delete test;
    delete test1;

    return 0;
}