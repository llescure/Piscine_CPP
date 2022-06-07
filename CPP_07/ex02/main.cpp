#include "Array.hpp"
#include <iostream>

int main(void)
{
    std::cout << "Case with empty array:" << std::endl;
    Array <int> empty;
    std::cout << empty.size() << std::endl;
    

    std::cout << std::endl;
    std::cout << "Case with an array of 10:" << std::endl;
    Array <char> full(10);
    std::cout << full.size() << std::endl;

    std::cout << std::endl;
    std::cout << "Trying to access out of bonds area:" << std::endl;
    std::cout << full[20] << std::endl;
    
    std::cout << std::endl;
    std::cout << "Copy constructor case:" << std::endl;
    Array <char> copy = full;

    std::cout << std::endl;
    std::cout << "Filling full with A:" << std::endl;
    for (unsigned int i = 0; i < full.size(); i++)
    {
        full[i] = 'A';
    }
    std::cout << "Filling copy with B:" << std::endl;
    for (unsigned int i = 0; i < copy.size(); i++)
    {
        copy[i] = 'B';
    }
       
    std::cout << std::endl;
    std::cout << "Displaying both arays:" << std::endl;
    std::cout << full[0] << std::endl;
    std::cout << copy[0] << std::endl;
    return (0);
}