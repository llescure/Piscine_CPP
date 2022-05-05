#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook 
{
    public: 
        Contact[8] contact;

        void    add(contact);
        void    display(contact);
        void    search(int id);
}

#endif