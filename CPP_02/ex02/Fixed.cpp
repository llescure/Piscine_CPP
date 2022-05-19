#include "Fixed.hpp"

// canonic class form

Fixed::Fixed(void)
{
   // std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const int number)
{
    // std::cout << "Int constructor called" << std::endl;

    this->_fixed_number = (int)round(number * (1 << this->_bits_number));
    return ;
}

Fixed::Fixed(const float number)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_fixed_number = (int)round(number * (1 << this->_bits_number));
    return ;
}

Fixed::Fixed(Fixed const &src)
{
    // std::cout << "Copy constructor called" << std::endl;

    *this = src;
    return ;
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
    return ;
}

// Member functions

int     Fixed::getRawBits(void) const
{
    return (this->_fixed_number);
}

void    Fixed::setRawBits(int const raw)
{
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

static Fixed &  min(Fixed & first, Fixed & second)
{
    if (first < second)
    {
        return (first);
    }
    else
    {
        return (second);
    }
}

static Fixed &  min(Fixed const & first, Fixed const & second)
{
    if (first < second)
    {
        return (first);
    }
    else
    {
        return (second);
    }
}

static Fixed &  max(Fixed & first, Fixed & second)
{
    if (first > second)
    {
        return (first);
    }
    else
    {
        return (second);
    }
}

static Fixed &  max(Fixed const & first, Fixed const & second)
{
    if (first > second)
    {
        return (first);
    }
    else
    {
        return (second);
    }
}

// Operators

Fixed &   Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl; 

    if (this != &rhs)
    {
        this->_fixed_number = rhs.getRawBits();
    }

    return *this;
}

Fixed &   Fixed::operator>(Fixed const & rhs)
{
    std::cout << "Superior operator called" << std::endl; 

    if (this != &rhs)
    {
        this->_fixed_number = rhs.getRawBits();
    }

    return *this;
}

std::ostream &  operator<<(std::ostream &o, Fixed const & i)
{
    o << i.toFloat();
    return (o);
}