#include "iter.hpp"
#include <stdio.h>

#define SIZE_FIRST_ARRAY 10
#define SIZE_SECOND_ARRAY 26

int main(void)
{
    std::cout << "First example: " << std::endl;
    int array[SIZE_FIRST_ARRAY] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "Initial values of array" << std::endl;
    std::cout << "array[";
    for (unsigned long i = 0; i < SIZE_FIRST_ARRAY; i++)
    {
        std::cout << array[i];
        if (i != SIZE_FIRST_ARRAY - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    std::cout << std::endl;

    ::iter(array, SIZE_FIRST_ARRAY, addOne);

    std::cout << "New values of array" << std::endl;
    std::cout << "array[";
    for (unsigned long i = 0; i < SIZE_FIRST_ARRAY; i++)
    {
        std::cout << array[i];
        if (i != SIZE_FIRST_ARRAY - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    return (0);
}

// class Awesome
// {
// public:
//     Awesome(void) : _n(42) { return; }
//     int get(void) const { return this->_n; }

// private:
//     int _n;
// };
// std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
// {
//     o << rhs.get();
//     return o;
// }
// template <typename T>
// void print(T const &x)
// {
//     std::cout << x << std::endl;
//     return;
// }
// int main()
// {
//     int tab[] = {0, 1, 2, 3, 4};
//     Awesome tab2[5];
//     iter(tab, 5, print);
//     iter(tab2, 5, print);
//     return 0;
// }