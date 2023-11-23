/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:24:43 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/23 15:36:27 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{	
	int				ncntct = 0;
	PhoneBook		PhoneBook;
	std::string		cmd;

	while (1)
	{
		std::cout << "pick a Command (ADD,SEARCH OR EXIT)."<<std::endl << "command : ";
		std::cin >> cmd;
		if (!std::cin.eof())
			break;
		else if (cmd == "ADD")
		{
			PhoneBook.ADD(&ncntct);
			ncntct++;
		}
		else if (cmd == "SEARCH")
			PhoneBook.SEARCH(ncntct);
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "COMMAND NOT FOUND" << std::endl;
	}
}
