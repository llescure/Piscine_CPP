#include "Base.hpp"
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void)
{
    int     random;
    Base    *newBase;

    srand(time(NULL));
    random = rand() % 3 + 1;
    switch (random)
    {
        case 1:
        newBase = new A;
        break;
        case 2:
        newBase = new B;
        break;
        case 3:
        newBase = new C;
        break;
    }
    return (newBase);
}

void    identify(Base *p)
{
    A   *a = NULL;
    B   *b = NULL;
    C   *c = NULL;
    try
    {
        a = dynamic_cast<A *>(p);
        b = dynamic_cast<B *>(p);
        c = dynamic_cast<C *>(p);

        if (a != NULL)
        {
            std::cout << "The object pointed by the pointer is of type A" << std::endl;
        }
        if (b != NULL)
        {
            std::cout << "The object pointed by the pointer is of type B" << std::endl;
        }
        if (c != NULL)
        {
            std::cout << "The object pointed by the pointer is of type C" << std::endl;
        }
    }
    catch(const std::bad_cast& e) 
    {
        std::cerr << e.what() << '\n';
    }
    
}

void    identify(Base &p)
{
    try
    {
        A  &a = dynamic_cast<A &>(p);
        (void) a;
        std::cout << "The object pointed by the pointer is of type A" << std::endl;
    }
    catch(const std::bad_cast& e) 
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void) b;
        std::cout << "The object pointed by the pointer is of type B" << std::endl;
    }
    catch(const std::bad_cast& e) 
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void) c;
        std::cout << "The object pointed by the pointer is of type C" << std::endl;
    }
    catch(const std::bad_cast& e) 
    {
        std::cerr << e.what() << '\n';
    }
}

int main(void)
{
    Base *test;

    test = generate();
    identify(test);
    identify(test);
    delete test;
}