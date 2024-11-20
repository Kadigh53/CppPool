/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:21:17 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/11/18 17:56:47 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int ac, char *av[])
{
	if (ac != 2)
		return (print("Error: not enough parametres"), 0);

	try
	{
		BitcoinExchange	exc; 
		std::ifstream	ifs;
		char			line[128];

		ifs.open(av[1]);
		if (!ifs.is_open())
			return (print("Error: bad input file"), 0);

		ifs.getline(line, sizeof(line));
		if (std::string(line).find("date") == std::string::npos
			|| std::string(line).find("|") == std::string::npos
			|| std::string(line).find("value") == std::string::npos)
			return (print("Error: bad input file"), 0);

		while (!ifs.eof())
		{
			ifs.getline(line, sizeof(line));
			exc.UserWalletEvolution(line);
		}
		ifs.close();
		return 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	

}


