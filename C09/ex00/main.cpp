/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:21:17 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/22 11:48:26 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

	if (*endptr) // amount string isnt a proper integer couldnt convert
		return (print("Error: bad input => " + amount), false);
	else if (value > 1000.0)
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
	if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
		maxDay = 29;

	if (year < 2009 || year > 2024  || maxDay < day)
		return (print("Error: bad input => " + date), false);

	return true;
}

	/*If the date used in the input does not exist in your DB then you
	must use the closest date contained in your DB. Be careful to use the
	lower date and not the upper one.*/
void nearestDate(std::string date, double BTCamount)
{
	
}

void	BitcoinExchange::performCalcul(std::string date, std::string amount)
{
	double BTCamount = std::stod(amount);
	DBiterator it = this->Db.find(date);
	if (it == this->Db.end())
		nearestDate(date, BTCamount);

	std::cout.precision(15);
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
};

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "not enough parametres\n";
		return 0;
	}

	BitcoinExchange	exc;
	std::ifstream	ifs;
	char			line[125];

	ifs.open(av[1]);
	if (!ifs.is_open())
	{
		std::cout << " input file fails at opening \n";
		return 0;
	}
	ifs.getline(line, sizeof(line));
	if (std::string(line).find("date") == std::string::npos)
	{
		std::cerr << "bad input file\n";
		return 0;
	}

	while (!ifs.eof())
	{
		ifs.getline(line, sizeof(line));
		// if (ifs.eof())
		// 	break;
		// exc.UserWalletEvolution(line);
		// std::cout << line << std::endl;
		exc.UserWalletEvolution(line);
	}
}


