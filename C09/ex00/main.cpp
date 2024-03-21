/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:21:17 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/21 13:31:48 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string strtrim( std::string str )
{
	std::string trimed_str(str);

	size_t pos1 = trimed_str.find_first_not_of(" \t");
	size_t pos2 = trimed_str.find_last_not_of(" \t");

	if (pos1 == std::string::npos || pos2 == std::string::npos)
		return ("");

	return (trimed_str.substr(pos1, pos2 - pos1 + 1));
}

void UserWalletEvolution( std::string line )
{
	size_t pos = line.find("|");
	if (pos != std::string::npos)
	{
		// std::cout <<"["<< line.substr(0, pos) << "]["<< line.substr(pos + 1, line.length() - pos) << "] |" ;
		std::string date = strtrim(line.substr(0, pos));
		std::string amount = strtrim(line.substr(pos + 1, line.length() - pos));
		
		// std::cout <<"["<< date << "] ["<< atof(amount.c_str()) << "]\n" ;
		// hna ghanmeshi nqaleb 3la l key dyal date f database but qbel ghanparssi date and values
	}
};

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "not enough parametres\n";
		return 0;
	}

	// BitcoinExchange	exc;
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
		UserWalletEvolution(line);
	}
}