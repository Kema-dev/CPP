/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 07:57:00 by jjourdan          #+#    #+#             */
/*   Updated: 2021/11/30 11:25:39 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account( int initial_deposit ) {
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts += 1;
	this->_accountIndex = ( this->_nbAccounts - 1 );
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;
	this->_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal(int withdrawal) {
	if (withdrawal <= this->_amount)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount - withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
		_nbWithdrawals += 1;
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;
		return (true);
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << "refused" << std::endl;
		return (false);
	}
}

void	Account::_displayTimestamp(void) {
	time_t		raw;
	struct tm	*mytime;

	time(&raw);
	mytime = gmtime (&raw);
	std::cout << "[" <<  1900 + mytime->tm_year;
	std::cout << mytime->tm_mon + 1;
	if (mytime->tm_mday < 10)
		std::cout << "0";
	std::cout << mytime->tm_mday << "_";
	if (mytime->tm_hour < 10)
		std::cout << "0";
	std::cout << mytime->tm_hour + 2;
	if (mytime->tm_min < 10)
		std::cout << "0";
	std::cout << mytime->tm_min;
	if (mytime->tm_sec < 10)
		std::cout << "0";
	std::cout << mytime->tm_sec << "] ";
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;