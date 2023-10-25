/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:29:31 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/23 23:14:05 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

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

	void	display_contacts(Contact contact, int index);

	void	display_uno_contact(int index);

	void	remove_oldest_contact( void );

public :
	void	ADD(int index);

	void	SEARCH();
};

void	PhoneBook::display_contacts(Contact contact, int index)
{
    std::cout << std::right << std::setw(10) << index << "|";
    std::cout << std::right << std::setw(10) << (contact.first_name.length() > 10 ? contact.first_name.substr(0, 9) + "." : contact.first_name) << "|";
    std::cout << std::right << std::setw(10) << (contact.last_name.length() > 10 ? contact.last_name.substr(0, 9) + "." : contact.last_name) << "|";
    std::cout << std::right << std::setw(10) << (contact.nickname.length() > 10 ? contact.nickname.substr(0, 9) + "." : contact.nickname) << "|";
    std::cout << std::right << std::endl;
}

void	PhoneBook::display_uno_contact(int index)
{
	std::cout << "first name : " << contacts[index].first_name << std::endl;
	std::cout << "last name  : " << contacts[index].last_name << std::endl;
	std::cout << "nickname   : " << contacts[index].nickname << std::endl;
	std::cout << "phone numbre  : " << contacts[index].phonenumber << std::endl;
	std::cout << "darkest secret : " << contacts[index].darkest_secret << std::endl;
}

void	PhoneBook::remove_oldest_contact()
{
	for (int i = 0; i < 7; i++)
		contacts[i] = contacts[i + 1];
}

void	PhoneBook::ADD(int index)
{
	int i = index;
	if (i > 7)
	{
		remove_oldest_contact();
		i = 7;
	}
	std::cout << "adding new contact to the PhoneBook!! fill the following informations"<< std::endl ;
	std::cout << "first name : ";
	std::cin >> contacts[i].first_name;
	std::cout << "last name : ";
	std::cin >> contacts[i].last_name;
	std::cout << "nickname : ";
	std::cin >> contacts[i].nickname;
	std::cout << "phone number : ";
	std::cin >> contacts[i].phonenumber;
	std::cout << "darkest secret : ";
	std::cin >> contacts[i].darkest_secret;
}

void	PhoneBook::SEARCH()
{
	int index;
	std::cout << "index     |first name|last name | nickname |" << std::endl;
	std::cout << "---------- ---------- ---------- ---------- " << std::endl;

	for (int i = 0; i < 8; i++)
		display_contacts(contacts[i], i);

	std::cout << "enter a contact index : ";
	std::cin >> index;
	if (std::cin.eof())
		return ;
	display_uno_contact(index);
}

#endif