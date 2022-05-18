#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    Harl test;

    if (argc != 2)
    {
        std::cout << "ERROR: Harl takes one argument" << std::endl;
        return (-1);
    }
    test.complain(argv[1]);
    return (0);
}