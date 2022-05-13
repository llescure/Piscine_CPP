#include "Account.hpp"
#include <algorithm>
#include <functional>

Account::Account(int initial_deposit)
{

}

~Account::Account(void)
{
    return ;
}

Account::void    makeDeposit(int deposit)
{
    this._amount += deposit;
    this._nbDeposits++;
    this._totalAmount += deposit;
}

Account::bool    makeWithdrawal(int withdrawal)
{
    this._amount -= withdrawal;
    this._nbWithdrawals++;
    this._totalAmount -= deposit;
}

Account::int checkAmount(void) const
{

}

Account::void    displayStatus(void) const
{
    std::cout << this._accountIndex << std::cendl;
    std::cout << this._amount << std::cendl;
    std::cout << this._nbDeposits << std::cendl;
    std::cout << this._nbWithdrawals << std::cendl;

}

Account::static void _displayTimestamp(void)
{

}