#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat
{
    public: 

    Cat(void);
    ~Cat(void);
    Cat(Cat const &src);

    Cat & operator=(Cat const &rhs);


    private:

};

#endif