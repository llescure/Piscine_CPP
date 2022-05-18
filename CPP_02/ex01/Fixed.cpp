#include "Fixed.hpp"

Fixed::Fixed(void) _fixed_number(0)
{
    return  ;
}

Fixed::~Fixed(void)
{
    return ;
}

int     getRawBits(void)
{
    return (this->_fixed_number);
}

void    setRawBits(int const raw)
{
    this->_fixed_number = raw;
    return ;
}