#include "MutantStack.hpp"
#include <list>

int main()
{
    /* Example with mutant stack */
    std::cout << "// Example with mutant stack //" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top of mutant stack : " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size of mutant stack : " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "Element " << std::distance(mstack.begin(), it) << " is " << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << std::endl;

    /* Example with const iterator */
    std::cout << "// Example with const iterator //" << std::endl;
    MutantStack<int> mmstack;
    mmstack.push(5);
    mmstack.push(17);
    std::cout << "Top of mutant stack : " << mmstack.top() << std::endl;
    mmstack.pop();
    std::cout << "Size of mutant stack : " << mmstack.size() << std::endl;
    mmstack.push(3);
    mmstack.push(5);
    mmstack.push(737);
    mmstack.push(0);
    MutantStack<int>::const_iterator it3 = mmstack.begin();
    MutantStack<int>::const_iterator ite3 = mmstack.end();
    ++it3;
    --it3;
    while (it3 != ite3)
    {
        std::cout << "Element is " << *it3 << std::endl;
        ++it3;
    }
    std::stack<int> s2(mmstack);
    std::cout << std::endl;

    /* Example with copy */
    std::cout << "// Example with copy //" << std::endl;
    MutantStack<int> cstack(mmstack);
    cstack.push(5);
    std::cout << "Top of copy stack : " << cstack.top() << std::endl;
    mmstack.pop();
    std::cout << "Size of copy stack : " << cstack.size() << std::endl;
    MutantStack<int>::const_iterator it4 = cstack.begin();
    MutantStack<int>::const_iterator ite4 = cstack.end();
    ++it4;
    --it4;
    while (it4 != ite4)
    {
        std::cout << "Element is " << *it4 << std::endl;
        ++it4;
    }
    std::cout << std::endl;

    /* Example with list */
    std::cout << "// Example with list //" << std::endl;
    std::list<int> lstack;
    lstack.push_back(5);
    lstack.push_back(17);
    std::cout << "Top of list : " << lstack.back() << std::endl;
    lstack.pop_back();
    std::cout << "Size of list : " << lstack.size() << std::endl;
    std::cout << std::endl;
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    lstack.push_back(0);
    std::list<int>::iterator it2 = lstack.begin();
    std::list<int>::iterator ite2 = lstack.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << "Element " << std::distance(lstack.begin(), it2) << " is " << *it2 << std::endl;
        ++it2;
    }
    return 0;
}