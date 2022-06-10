#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack
{
    public:

    MutantStack(void);
    MutantStack(MutantStack const &src);
    ~MutantStack(void);

    MutantStack &operator=(MutantStack const &rhs);

    private:
    T   _array;
};

#endif