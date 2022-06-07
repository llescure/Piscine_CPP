#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename U, typename F>
void    iter(T &array, U const &size, F const function)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = function(array[i]);
    }
}

#endif

int    addOne(int x)
{
    return (x+= 1);
}