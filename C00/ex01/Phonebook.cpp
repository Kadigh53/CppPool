/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:22:27 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/22 21:05:22 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	PhoneBook		PhoneBook;
	std::string		cmd;
	int				ncntct = 0;
	unsigned long	index = 0;

	std::cout << "pick a Command (ADD,SEARCH OR EXIT)."<<std::endl << "command : ";
	std::cin >> cmd;
	while (!std::cin.eof())
	{
		if (cmd == "ADD")
			PhoneBook.ADD(ncntct++);
		else if (cmd == "SEARCH")
		{
			if (index >= 8)
				std::cout << "invalid index, index(0-7)." << std::endl;
			else if (index > ncntct)
				std::cout << "PhoneBook empty, no contact to search for." << std::endl;
			else
				PhoneBook.SEARCH();
		}
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "COMMAND NOT FOUND" << std::endl;
		std::cout << "pick a Command (ADD,SEARCH OR EXIT)."<<std::endl << "command : ";
		std::cin >> cmd;
	}
}
