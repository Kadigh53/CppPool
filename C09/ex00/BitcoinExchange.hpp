/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:09:23 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/22 11:28:15 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

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
	void fillDb(std::string line);//, std::ofstream& output);

	void UserWalletEvolution( std::string line );
	void performCalcul(std::string date, std::string amount);


	~BitcoinExchange();
};

#endif
