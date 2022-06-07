#include "iter.hpp"
#include <stdio.h>

#define SIZE_FIRST_ARRAY    10
#define SIZE_SECOND_ARRAY   26

int main(void)
{
    std::cout << "First example: " << std::endl;
    int     array[SIZE_FIRST_ARRAY] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

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
    std::cout << std::endl;
    
    std::cout << "Second example: " << std::endl;
    char    array2[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                    'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                    'W', 'X', 'Y', 'Z'};

    std::cout << "Initial values of array" << std::endl;
    std::cout << "array2[";
    for (unsigned long i = 0; i < SIZE_SECOND_ARRAY; i++)
    {
        std::cout << array2[i];
        if (i != SIZE_SECOND_ARRAY - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    std::cout << std::endl;


    ::iter(array2, SIZE_SECOND_ARRAY, tolower);

    std::cout << "New values of array" << std::endl;
    std::cout << "array2[";
    for (unsigned long i = 0; i < SIZE_SECOND_ARRAY; i++)
    {
        std::cout << array2[i];
        if (i != SIZE_SECOND_ARRAY - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    
    return (0);
}