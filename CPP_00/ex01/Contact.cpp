#include "Contact.hpp"

Contact::Contact( string first, string last, string name, string phone,
    string secret)
{
    this.first_name = "";
    this.last_name = "";
    this.phone_number = "";
    this.darkest_secret = "";
}

~Contact::Contact(void)
{
    return ;
}

void    Contact::add()
{    
    while (first_name.empty())
    {
        cout << "Please enter first name of new contact" << endl;
        cin >> this.first_name;
    }
    while (last_name.empty())
    {
        cout << "Please enter last name of new contact" << endl;
        cin >> this.last_name;
    }
    while (phone_number.empty())
    {
        cout << "Please enter phone number of new contact" << endl;
        cin >> this.phone_number;
    }
    while (darkest_secret.empty())
    {
        cout << "Please enter darkest secret of new contact" << endl;
        cin >> this.darkest_secret;
    }
}    
