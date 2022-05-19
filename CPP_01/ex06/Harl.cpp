#include "Harl.hpp"

Harl::Harl(void)
{
    return;
}

Harl::~Harl(void)
{
    return;
}

void Harl::complain(std::string level)
{
    int i;

    i = 0;
    std::string type[4] =
        {
            "DEBUG",
            "INFO",
            "WARNING",
            "ERROR",
        };

    while (i < 4)
    {
        if (level.compare(type[i]) == 0)
        {
            break;
        }
        i++;
    }
    switch (i + 1)
    {
        case 1:
            this->debug();
            std::cout << std::endl;
        case 2:
            this->info();
            std::cout << std::endl;
        case 3:
            this->warning();
            std::cout << std::endl;
        case 4:
            this->error();
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my"
              << "7XL-double-cheese-triple-pickle-specialketchup burger. " << std::endl;
    std::cout << "I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}