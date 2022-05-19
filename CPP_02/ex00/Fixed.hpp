#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
    Fixed(void);
    ~Fixed(void);
    Fixed(Fixed const & src);

    Fixed &operator=(Fixed const & rhs);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    private:
    int _fixed_number;
    static int const _bits_number;
};

#endif