#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

class NotFound : public std::exception
{
    public:

    virtual const char * what() const throw(){ return ("The element doesn't exist in this array"); };
};

template <typename T>
void easyfind(T &array, const int &toFind)
{
    typename T::iterator i;
    typename T::iterator start = array.begin();
    
    try
    {
        i = std::find(array.begin(), array.end(), toFind);
        if (i != array.end())
        {
            std::cout << "The element exists and is at position " << std::distance(start, i) + 1<< std::endl;
        }
        else
        {
            throw NotFound();
        }
    }
    catch (NotFound &e)
    {
        std::cerr << e.what() << '\n';
    }
}

#endif