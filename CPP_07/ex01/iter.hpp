#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T *array, int const &size, void (*function)(const T &))
{
    for (int i = 0; i < size; i++)
    {
        function(array[i]);
    }
}

template <typename T>
void    iter(T *array, int const &size, void (*function)(T &))
{
    for (int i = 0; i < size; i++)
    {
        function(array[i]);
    }
}

#endif

void    addOne(int &x)
{
    x+= 1;
}