#include <iostream>
#include <ctime>

#include "Account.class.hpp"

Account::Account(void)
{
	_accountIndex = _nbAccounts;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 1;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalNbDeposits++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount <<
		";deposit:" << deposit << ";amount:" << _amount + deposit <<
		";nb_deposits:" << _nbDeposits + 1 << std::endl;
	_amount += deposit;
	_totalAmount += _amount;
	_nbDeposits++;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount >= withdrawal)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount <<
			";withdrawal:" << withdrawal << ";withdrawal:" << _amount - withdrawal <<
			";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
		_amount -= withdrawal;
		_totalAmount -= _amount;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		return (true);
	}
	else
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" <<
			";withdrawal:refused" << std::endl;
		return (false);
	}
}

void	Account::_displayTimestamp(void)
{
	time_t		now = time(0);
	struct tm	*tnow = localtime(&now);
	char		str[32];

	strftime(str, sizeof(str), "[%Y%d%m_%H%M%S] ", tnow);
	std::cout << str;
};

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" <<
		_nbDeposits << ";withdrawals:" << _nbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount <<
		";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals <<
		std::endl;
}
