#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
    Fixed(void);
    Fixed(const int number);
    Fixed(const float number);
    ~Fixed(void);
    Fixed(Fixed const & src);
    
    Fixed &     operator=(Fixed const & rhs);

    // Comparison operators

    Fixed &     operator>(Fixed const & rhs);
    Fixed &     operator<(Fixed const & rhs);
    Fixed &     operator>=(Fixed const & rhs);
    Fixed &     operator<=(Fixed const & rhs);
    Fixed &     operator==(Fixed const & rhs);
    Fixed &     operator!=(Fixed const & rhs);

    // Arithmetic operators

    Fixed &     operator+(Fixed const & rhs);
    Fixed &     operator-(Fixed const & rhs);
    Fixed &     operator*(Fixed const & rhs);
    Fixed &     operator/(Fixed const & rhs);

    // Increment and decrement operators


    int                sgetRawBits(void) const;
    void               setRawBits(int const raw);
    float              toFloat(void) const;
    int                toInt(void) const;
    static Fixed &     min(Fixed & first, Fixed & second);
    static Fixed &     min(Fixed const & first, Fixed const & second);
    static Fixed &     max(Fixed & first, Fixed & second);
    static Fixed &     max(Fixed const & first, Fixed const & second);

    private:
    int                 _fixed_number;
    static int const    _bits_number = 8;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & i);

#endif