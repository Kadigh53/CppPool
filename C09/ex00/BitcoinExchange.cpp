/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:18:40 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/11/20 17:45:34 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream ifs("./data.csv");

    if (!ifs.is_open())
        throw FileError();
    while (!ifs.eof())
    {
        char line[256];
        ifs.getline(line, 256);
        fillDb(line);
    }
    ifs.close();
} 

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    (void)other;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    (void)other;
    return (*this);
}

void BitcoinExchange::fillDb(std::string line)//, std::ofstream& output)
{
    size_t pos = line.find_first_of(",");
    std::string date = line.substr(0, pos);
    std::string ExchangPrice = line.substr(pos + 1, line.length() - pos);
    if(!atoi(date.substr(0, 4).c_str()))
        return;
    char* endptr;
    double price = strtod(ExchangPrice.c_str(), &endptr);
    if (*endptr)
        return;
    this->Db.insert(std::pair<std::string, double>(date, price));
}

DBmap& BitcoinExchange::getDb( void )
{
    return (this->Db);
}

void print(std::string error_Msg)
{
	std::cerr << error_Msg << std::endl;
}

std::string strtrim( std::string str )
{
	std::string trimed_str(str);

	size_t pos1 = trimed_str.find_first_not_of(" \t");
	size_t pos2 = trimed_str.find_last_not_of(" \t");

	if (pos1 == std::string::npos || pos2 == std::string::npos)
		return ("");

	return (trimed_str.substr(pos1, pos2 - pos1 + 1));
}

bool	parse_amount(std::string amount)
{
	char* endptr;
	double value =  strtod(amount.c_str(), &endptr);

	if (*endptr)
		return (print("Error: bad input => " + amount), false);
	else if (value > INT_MAX )
		return (print("Error: too large number"), false);
	else if(value < 0)
		return (print("Error: Not a positive number"), false);

	return true;
}

bool	parse_date(std::string& date)
{
	struct tm date_struct;
	if (!strptime(date.c_str(), "%Y-%m-%d", &date_struct))
		return (print("Error: bad input => " + date), false);

	int year = date_struct.tm_year + 1900;
	int month = date_struct.tm_mon + 1;
	int day = date_struct.tm_mday;

	const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int maxDay = daysInMonth[month - 1];
	if (month == 2 && (year % 4 == 0 && year % 100 != 0))
		maxDay = 29;

	if (year < 2009 || maxDay < day || year > 2022)
		return (print("Error: bad input => " + date), false);

	return true;
}

void	BitcoinExchange::performCalcul(std::string date, std::string amount)
{
	char* endptr;
	double BTCamount = strtod(amount.c_str(), &endptr);
	// if (*endptr)
	// 	return (print("Error: bad input => " + amount), void());
	DBiterator it = this->Db.find(date);
	if (it == this->Db.end())
		it = this->Db.lower_bound(date);

	std::cout << it->first << " => " 
		<< BTCamount << " = " << BTCamount * it->second << std::endl;
}

void BitcoinExchange::UserWalletEvolution( std::string line )
{
	size_t pos = line.find("|");
	if (pos != std::string::npos)
	{
		std::string date = strtrim(line.substr(0, pos));
		std::string amount = strtrim(line.substr(pos + 1, line.length() - pos));

		if (!parse_amount(amount) || !parse_date(date))
			return ;
		performCalcul(date, amount);
	}
    else
        print("Error: bad input => " + line);
}
const char* FileError::what() const throw()
{
	return "Error: file doesn't exist";
}

BitcoinExchange::~BitcoinExchange()
{}
