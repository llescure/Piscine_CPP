#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <string>
#include <iomanip>

class PhoneBook 
{
    public: 
        Contact[8] contact;

        PhoneBook(void);
        ~PhoneBook(void);

        void    add(void);
        void    display(void);
        void    search(const int id);
}

#endif