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

    int     getRawBits(void);
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    private:
    int                 _fixed_number;
    static int const    _bits_number = 8;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & i);

#endif