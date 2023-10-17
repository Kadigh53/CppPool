/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:22:27 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/17 20:54:23 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

class	Contact {
public :
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkest_secret;
};

class	PhoneBook {
private :
	Contact	contacts[8];
	void	print_contact_attr(Contact contct, size_t n)
	{
		int i = 0;
		while (i < n)
		{
			std::cout << std::right << std::setw(10) << contct.first_name.substr(i * 10, 10);
			std::cout << std::right << std::setw(10) << "|" << contct.last_name.substr(i * 10, 10);
			std::cout << std::right << std::setw(10) << "|" << contct.nickname.substr(i * 10, 10) << "|";
			std::cout << std::endl << "          ";
			i++;
		}
	}
public :
	void	ADD(int index)
	{
		// if (index > 7)
		// 	;
		std::cout << "adding new contact to the PhoneBook!! fill the following informations"<< std::endl ;
		std::cout << "first name : ";
		std::cin >> contacts[index].first_name;
		std::cout << "last name : ";
		std::cin >> contacts[index].last_name;
		std::cout << "nickname : ";
		std::cin >> contacts[index].nickname;
		std::cout << "phone number : ";
		std::cin >> contacts[index].phonenumber;
		std::cout << "darkest secret : ";
		std::cin >> contacts[index].darkest_secret;
	}
	void	SEARCH(int index)
	{
		std::cout << "---------- ---------- ---------- ---------- " << std::endl;
		std::cout <<  index << "         |";

		print_contact_attr(contacts[index],5);
// 
		std::cout << std::endl;
	}
	void	EXIT()
	{
		exit(0);
	}
};

int	main()
{
	PhoneBook	PhoneBook;
	std::string	cmd;
	int			ncntct = 0;
	int			index = 0;

	while (1)
	{
		std::cout << "pick a Command : \"ADD\",\"SEARCH\" OR \"EXIT\"."<<std::endl << "command : ";
		std::cin >> cmd;
		if (cmd == "ADD")
			PhoneBook.ADD(ncntct++);
		else if (cmd == "SEARCH")
		{
			std::cout << "choose an index : ";
			std::cin >> index;
			if (index >= 8)
				std::cout << "invalid index. index(0-7)" << std::endl;
			else
				PhoneBook.SEARCH(index);
		}
		else if (cmd == "EXIT")
			PhoneBook.EXIT();
		else
			std::cout << "COMMAND NOT FOUND" << std::endl;
	}
}
