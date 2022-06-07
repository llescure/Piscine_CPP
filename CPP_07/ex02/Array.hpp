#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <iomanip>
#include <stdlib.h>

template< typename T >
class Array
{
    public:

    Array<T>(void): _size(0)
    {
        this->_array = new T;
    }

    Array<T>(unsigned int n): _size(n)
    {
        this->_array = new T[n];
    }

    Array<T>(Array const &src)
    {
        this->_size = src.size();
        this->_array = new T[this->_size];
        for (unsigned int i = 0; i < this->_size; i++)
        {
            this->_array[i] = src._array[i];
        }
    }
    
    ~Array<T>(void) 
    {
        if (this->_size > 0)
        {
            delete [] this->_array;
        }
        else
        {
            delete this->_array;
        }
    }


/********************/
/* Member functions */
/********************/

    unsigned int    size(void) const { return (this->_size); }


/*************/
/* Operators */
/*************/

    Array   &operator=(Array const &rhs)
    {
        if (this != &rhs)
        {
            this->_size = rhs.size();
            this->_array = new T[this->_size];
            for (unsigned int i = 0; i < this->_size; i++)
            {
                this->_array[i] = rhs._array[i];
            }
        }
        return (*this);
    }

    T   &operator[](unsigned int const &i)
    {
        try
        {
            if (i >= this->_size)
            {
                throw OutOfBonds();
            }
            else
            {
                return (this->_array[i]);
            }
        }
        catch(const Array::OutOfBonds& e)
        {
            std::cerr << e.what();
        }
        return (this->_array[0]);
    }

/*********************/
/* Exception classes */
/*********************/

    class OutOfBonds: public std::exception
    {
        public:

        const char *what() const throw()
        {
            return ("You are trying to access an out of bonds area");
        }
    };

    private:

    T               *_array;
    unsigned int    _size;
};

#endif