/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:20:28 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/25 09:07:30 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::display_contacts(Contact contact, int index)
{
	std::string f_name = (contact.first_name.length() > 10 ? contact.first_name.substr(0, 9) + "." : contact.first_name);
	std::string l_name = (contact.last_name.length() > 10 ? contact.last_name.substr(0, 9) + "." : contact.last_name);
	std::string nickname = (contact.nickname.length() > 10 ? contact.nickname.substr(0, 9) + "." : contact.nickname);

	std::cout << std::right << std::setw(10) << index << "|";
	std::cout << std::right << std::setw(10) << f_name << "|";
	std::cout << std::right << std::setw(10) << l_name << "|";
	std::cout << std::right << std::setw(10) << nickname << "|";
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

void	PhoneBook::ADD(int *index)
{	
	int i = *index;
	if (i > 7)
	{
		remove_oldest_contact();
		*index = 8;
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

void	PhoneBook::SEARCH(int PBsize)
{
	int			index;
	std::string	value;

	std::cout << "index     |first name|last name | nickname |" << std::endl;
	std::cout << "---------- ---------- ---------- ---------- " << std::endl;

	for (int i = 0; i < 8; i++)
		display_contacts(contacts[i], i);
	std::cout << "enter a contact index : ";
	getline(std::cin,value);
	index = atoi(value.c_str());
	std::cout << index;
	return ;
	if (!(std::cin >> index))
	{
		std::cout << "invalid input, enter a valid integer." << std::endl;
		return;
	}
	if (index >= PBsize || (index < 0))
	{
		std::cout << "this contact doesn't existe" << std::endl;
		return ;
	}
	display_uno_contact(index);
}

void 		Contact::set_f_name(std::string f_name)
{}
std::string Contact::get_f_name()
{}
void 		Contact::set_l_name(std::string l_name)
{}
std::string Contact::get_l_name()
{}
void 		Contact::set_nickname(std::string nickname)
{}
std::string Contact::get_nickname()
{}
void 		Contact::set_phonenumber(std::string phonenumber)
{}
std::string Contact::get_phonenumber()
{}
void 		Contact::set_darkest_secret(std::string dark_s)
{}
std::string Contact::get_darkest_secret()
{}