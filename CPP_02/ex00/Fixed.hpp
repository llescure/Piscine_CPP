#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
    Fixed(void);
    ~Fixed(void);

    int     getRawBits(void);
    void    setRawBits(int const raw);

    private:
    int _fixed_number;
    static int const _bits_number;
;}

#endif