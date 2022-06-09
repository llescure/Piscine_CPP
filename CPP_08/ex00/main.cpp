#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main(void)
{

    /* Test with vector */

    std::cout << "// Test with vector //\n" << std::endl;

    std::cout << "Creating a vector with value 10, 20, 0, 27, 25" << std::endl;
    std::vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(0);
    vect.push_back(27);
    vect.push_back(25);

    std::cout << std::endl;
    std::cout << "Trying to find a value that is not in the vector: 2" << std::endl;

    easyfind(vect, 2);

    std::cout << std::endl;
    std::cout << "Trying to find a value that is in the vector: 27" << std::endl;
    easyfind(vect, 27);
    std::cout << std::endl;

    /* Test with deque */

    std::cout << "// Test with deque //\n" << std::endl;
    std::cout << "Creating a list with value 11, -23, 15, 30, 25" << std::endl;

    std::deque<int> dq;

    dq.push_back(11);
    dq.push_back(-23);
    dq.push_back(15);
    dq.push_back(30);
    dq.push_back(25);

    std::cout << std::endl;
    std::cout << "Trying to find a value that is not in the list: 23" << std::endl;

    easyfind(dq, 23);

    std::cout << std::endl;
    std::cout << "Trying to find a value that is in the list: -23" << std::endl;
    easyfind(dq, -23);
    std::cout << std::endl;

    /* Test with list */

    std::cout << "// Test with list //\n" << std::endl;
    std::cout << "Creating a list with value 203, 16, 15, 8, 34" << std::endl;

    std::list<int> lst;
    std::list<int>::iterator i;

    lst.push_back(203);
    lst.push_back(16);
    lst.push_back(15);
    lst.push_back(8);
    lst.push_back(34);

    std::cout << std::endl;
    std::cout << "Trying to find a value that is not in the list: 23" << std::endl;

    easyfind(lst, 23);

    std::cout << std::endl;
    std::cout << "Trying to find a value that is in the list: 203" << std::endl;
    easyfind(lst, 203);

    return (0);
}