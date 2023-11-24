/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:34:44 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/24 06:27:42 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit )
		: _accountIndex(_nbAccounts), _amount(initial_deposit)
{
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << checkAmount() << ";"
				<< "created"<< std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	_nbAccounts--;
	std::cout <<"index:" << _accountIndex << ";"
				<< "amount:" << checkAmount() << ";"
				<< "closed"<< std::endl;
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

void	Account::_displayTimestamp()
{
	std::time_t currentTime = std::time(0);

	std::tm* timeInfo = std::localtime(&currentTime);

	char buffer[17];	
	std::strftime(buffer, 17, "%Y%m%d_%H%M%S", timeInfo);
	std::cout << "[" << buffer << "] ";
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
	std::cout << "index:" << _accountIndex << ";"
			<< "p_amount:" << p_amount << ";"
			<< "deposit:" << deposit << ";"
			<< "amount:" << _amount << ";"
			<< "nb_deposits:" << _nbDeposits
			<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal < 0)
		return (false);

	int p_amount;
	p_amount = _amount;

	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";"
			 << "p_amount:" << p_amount << ";";

	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_totalAmount -=withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";" 
				<< "amount:" << _amount << ";" 
				<< "nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
		return (true);
	}

	std::cout << "withdrawal:refused"
			<< std::endl;

	return (false);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
			 << "total:" << getTotalAmount() << ";"
			 << "deposits:" << getNbDeposits() << ";"
			 << "withdrawals:" << getNbWithdrawals()
			 << std::endl;
}

