/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:09:23 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/11/19 10:14:18 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <climits>
#include <fstream>
#include <cstdlib>
#include <string>
#include <map>

void print(std::string error_Msg);
std::string strtrim( std::string str );
bool	parse_amount(std::string amount);
bool	parse_date(std::string& date);

class FileError : public std::exception
{
public:
	virtual const char* what() const throw();
};

typedef std::map<std::string, double> DBmap;
typedef std::map<std::string, double>::iterator DBiterator;

class BitcoinExchange
{
private :
	DBmap	Db;

public :

	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange& operator=(const BitcoinExchange& other);

	DBmap& getDb( void );
	void fillDb(std::string line);

	void UserWalletEvolution( std::string line );
	void performCalcul(std::string date, std::string amount);

	~BitcoinExchange();
};

#endif
