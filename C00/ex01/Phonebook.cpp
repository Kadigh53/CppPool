/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:22:27 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/17 04:36:17 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Phonebook.hpp"
#include <iostream>

class	Contact {
public :
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkest_secret;
};

class	PhoneBook {
public :
	Contact	contacts[8];
	void	ADD(Contact contact)
	{
		std::cout << "adding new contact to the PhoneBook!! fill the following informations" ;
		std::cout << std::endl << "first name : ";
		std::cin >> contact.first_name;
		std::cout << std::endl << "last name : ";
		std::cin >> contact.last_name;
		std::cout << std::endl << "nickname : ";
		std::cin >> contact.nickname;
		std::cout << std::endl << "phone number : ";
		std::cin >> contact.phonenumber;
		std::cout << std::endl << "darkest secret : ";
		std::cin >> contact.darkest_secret;
	}
	void	SEARCH(int index, Contact contacts[8])
	{
		if (index > 9)
			// define a behavior 
		std::cout << "---------- ---------- ---------- ----------" << std::endl;
		std::cout <<  index << "         |";
		for (int i = 0; i < contacts[index].first_name.length();i++)
			for (int j = 0; j < 10; j++)
				std::cout << contacts[index].first_name[j];

		for (int i = 0; i < contacts[index].last_name.length();i++)
			for (int j = 0; j < 10; j++)
				std::cout << contacts[index].last_name[j];

		for (int i = 0; i < contacts[index].nickname.length();i++)
			for (int j = 0; j < 10; j++)
				std::cout << contacts[index].nickname[j];
	}
	void	EXIT()
	{
		exit(0);
	}
};



int	main()
{
	PhoneBook	Phonebook;
	std::string	cmd;
	int			i = 0;

	while (cmd != "EXIT")
	{
		std::cout << "pick a Command : \"ADD\",\"SEARCH\" OR \"EXIT\"."<<std::endl << "command : ";
		std::cin >> cmd;
		if (cmd == "ADD" && i < 8)
	}
}
