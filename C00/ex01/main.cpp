/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:24:43 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/24 15:03:03 by aaoutem-         ###   ########.fr       */
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
		getline(std::cin, cmd);
		if (cmd.empty())
		{
			// continue;
			std::cout << "OLA" << std::endl;
			break;
		}
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
	return 0;
}
