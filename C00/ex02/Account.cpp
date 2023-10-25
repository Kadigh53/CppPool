/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:34:44 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/25 04:49:01 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit )
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "created"<< std::endl;
}

Account::Account(void)
{
	_amount = 0;
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "created"<< std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	_nbAccounts--;
	std::cout <<"index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "closed"<< std::endl;
}

void	Account::_displayTimestamp()
{
	std::cout << "[19920104_091532] ";
	return ;




	// std::time_t currentTime = std::time(0);

	// std::tm* timeInfo = std::localtime(&currentTime);

	// char buffer[17];	
	// std::strftime(buffer, 17, "%Y%m%d_%H%M%S", timeInfo);
	// std::cout << "[" << buffer << "] ";
}
void	Account::makeDeposit( int deposit )
{
	int p_amount;
	if (deposit <= 0)
		return ;
	p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits ++;
	_nbDeposits ++;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";"; 
	std::cout << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal < 0)
		return (false);

	int p_amount;
	p_amount = _amount;

	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";

	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_totalAmount -=withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";" ;
		std::cout << "amount:" << _amount << ";" ;
		std::cout << "nb_withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;
		return (true);
	}

	std::cout << "withdrawal:refused";
	std::cout << std::endl;

	return (false);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

int		Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}
int		Account::getTotalAmount( void )
{
	return(Account::_totalAmount);
}
int		Account::getNbDeposits( void )
{
	return(Account::_totalNbDeposits);
}
int		Account::getNbWithdrawals( void )
{
	return(Account::_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}
