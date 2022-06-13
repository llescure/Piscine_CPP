#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:

/******************/
/* Canonical Form */
/******************/

    MutantStack(void) { return; };
    MutantStack(MutantStack const &src): std::stack<T>(src) { return; };
    virtual ~MutantStack(void) { return; };

    MutantStack &operator=(MutantStack const &rhs)
    {
        if (this != &rhs)
        {
            std::stack<T>rhs;
        }
        return (*this);
    };

/*************/
/* Iterators */
/*************/

typedef typename std::stack<T>::container_type::iterator        iterator;
typedef typename std::stack<T>::container_type::const_iterator  const_iterator;

iterator    begin(void)
{
    return (this->c.begin());
};

iterator    end(void)
{
    return (this->c.end());
};

const_iterator    begin(void) const
{
    return (this->c.begin());
};

const_iterator    end(void) const
{
    return (this->c.end());
};
};

#endif