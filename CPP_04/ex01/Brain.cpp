#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
    return ;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain constructor copy called" << std::endl;
    *this = src;
    return ;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
    return ;
}

Brain   & Brain::operator=(Brain const & rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return (*this);
}