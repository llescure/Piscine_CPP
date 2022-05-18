#include "Harl.hpp"
#include <iostream>

int main(void)
{
    Harl test;

    test.complain("DEBUG");
    test.complain("INFO");
    test.complain("WARNING");
    test.complain("ERROR");
    test.complain("UPSET");
}