#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    Fixed   a(-10);
    Fixed   const b(Fixed(5.05f) * Fixed(2));
    Fixed   const c(Fixed(5.05f) - Fixed(10));

    std::cout << std::endl;
    std::cout << "Pre-increment" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;

    std::cout << std::endl;
    std::cout << "Post-increment" << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << std::endl;
    std::cout << "Pre-decrement" << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;

    std::cout << std::endl;
    std::cout << "Post-decrement" << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;

    std::cout << std::endl;
    std::cout << "Difference" << std::endl;
    std::cout << c << std::endl;

    std::cout << std::endl;
    std::cout << "Multiplication" << std::endl;
    std::cout << b << std::endl;

    std::cout << std::endl;
    std::cout << "Strict comparison" << std::endl;
    std::cout << (b > a) << std::endl;

    std::cout << std::endl;
    std::cout << "Equality" << std::endl;
    std::cout << (b == a) << std::endl;

    std::cout << std::endl;
    std::cout << "Max between a and b" << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << std::endl;
    std::cout << "Min between a and b" << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;

    std::cout << std::endl;
    std::cout << "Max between b and c" << std::endl;
    std::cout << Fixed::max(b, c) << std::endl;

    return 0;
}
