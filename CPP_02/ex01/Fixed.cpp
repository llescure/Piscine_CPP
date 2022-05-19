#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const int number)
{
    setRawBits(number);
    return ;
}

Fixed::Fixed(const float number)
{
    setRawBits(number);
    return ;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = src;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_number);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    
    this->_fixed_number = raw;
    return ;
}

float   Fixed::toFloat(void) const
{
    return(this->_fixed_number / (float)(1 << this->_bits_number));
}

int     Fixed::toInt(void) const
{
    return (this->_fixed_number / (int)(1 << this->_bits_number));
}

Fixed &   Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl; 

    if (this != &rhs)
    {
        this->_fixed_number = rhs.getRawBits();
    }

    return *this;
}

std::ostream &  operator<<(std::ostream &o, Fixed const & i)
{
    o << i.getRawBits();
}