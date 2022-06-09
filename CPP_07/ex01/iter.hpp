#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T *array, size_t const &size, void (*function)(T &))
{
    for (size_t i = 0; i < size; i++)
    {
        function(array[i]);
    }
}

template <typename T>
void    iter(T *array, size_t const &size, void (*function)(T const &))
{
    for (size_t i = 0; i < size; i++)
    {
        function(array[i]);
    }
}

#endif

void    addOne(int &x)
{
    x+= 1;
}