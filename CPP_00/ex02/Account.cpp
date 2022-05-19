#include "Account.hpp"
#include <algorithm>
#include <functional>
#include <iostream>
#include <ctime>

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
    return ;
}

Account::Account(void)
{
    return ;
}

Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed";
    if (this->_accountIndex != Account::_nbAccounts - 1)
    {
        std::cout << std::endl;
    }
    return ;
}

int Account::getNbAccounts(void)
{
    return(Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return(Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return(Account::_totalNbWithdrawals);
}

void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    this->_amount -= withdrawal;
    if (checkAmount() < 0)
    {
        std::cout << "withdrawal:refused" << std::endl;
        this->_amount += withdrawal;
        return (false);
    }
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount(void) const
{
    if (this->_amount < 0)
    {
        return (-1);
    }
    return (0);
}

void    Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;

}

void Account::_displayTimestamp(void)
{
    time_t      now;
    tm          *time_struct;
    char        buffer[80];

// Time in seconds
    now = time(0);
//Get current time in the struct
    time_struct = localtime(&now);

    strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", time_struct);
    std::cout << buffer;
}