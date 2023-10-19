/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:22:27 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/19 18:55:13 by aaoutem-         ###   ########.fr       */
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

	void	display_contacts(Contact contct, int index)
	{
			std::cout << std::setw(10) << index << "         |";
			std::cout << std::setw(10) << (contct.first_name.length() > 10 ? contct.first_name.substr(0, 9) + "." : contct.first_name) << "|";
			std::cout << std::setw(10) << (contct.last_name.length() > 10 ? contct.last_name.substr(0, 9) + "." : contct.last_name) << "|";
			std::cout << std::setw(10) << (contct.nickname.length() > 10 ? contct.nickname.substr(0, 9) + "." : contct.nickname);
			std::cout << std::endl;
	}	
	void	display_uno_contact(int index)
	{
		std::cout << "first name : " << contacts[index].first_name << std::endl;
		std::cout << "last name  : " << contacts[index].last_name << std::endl;
		std::cout << "nickname   : " << contacts[index].nickname << std::endl;
		std::cout << "phone numbre  : " << contacts[index].phonenumber << std::endl;
		std::cout << "darkest secret : " << contacts[index].darkest_secret << std::endl;
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
	void	SEARCH()
	{
		int index;
		std::cout << "index     |frst name |last name |nickname  |" << std::endl;
		std::cout << "---------- ---------- ---------- ---------- " << std::endl;

		for (int i = 0; i < 8; i++)
			display_contacts(contacts[i], i);

		std::cout << "enter a contact index : ";
		std::cin >> index;
		display_uno_contact(index);

	}
	void	EXIT()
	{
		exit(0);
	}
};

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
			//if index < cntct%8 
			std::cout << "choose an index : ";
			std::cin >> index;
			if (index >= 8)
				std::cout << "invalid index. index(0-7)" << std::endl;
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
