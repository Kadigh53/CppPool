/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:20:28 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/27 18:39:52 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void displayCntctTable(std::string element)
{
	std::cout << std::right << std::setw(10) << element << "|";
}

void	PhoneBook::display_contacts(Contact contact, int index)
{
	std::string f_name = (contact.getFname().length() > 10 ? contact.getFname().substr(0, 9) + "." : contact.getFname());
	std::string l_name = (contact.getLname().length() > 10 ? contact.getLname().substr(0, 9) + "." : contact.getLname());
	std::string nickname = (contact.getNickname().length() > 10 ? contact.getNickname().substr(0, 9) + "." : contact.getNickname());

	std::cout << std::right << std::setw(10) << index << "|";
	displayCntctTable(f_name);
	displayCntctTable(l_name);
	displayCntctTable(nickname);
	std::cout << std::endl;
}

void	PhoneBook::display_uno_contact(int index)
{
	std::cout << "first name : " << contacts[index].getFname() << std::endl;
	std::cout << "last name  : " << contacts[index].getLname() << std::endl;
	std::cout << "nickname   : " << contacts[index].getNickname() << std::endl;
	std::cout << "phone numbre  : " << contacts[index].getPhoneNbr() << std::endl;
	std::cout << "darkest secret : " << contacts[index].getDsecret() << std::endl;
}

void	PhoneBook::remove_oldest_contact()
{
	for (int i = 0; i < 7; i++)
		contacts[i] = contacts[i + 1];
}

std::string	getCntctData(std::string field)
{
	std::string str;

	std::cout << field;
	if (!std::getline(std::cin,str))
	{
		std::cin.clear();
		clearerr(stdin);
		std::cout << std::endl; 
	}
	return str;
}

void	PhoneBook::ADD(int *index)
{	
	int i = *index;
	std::string str;

	if (i > 7)
	{
		remove_oldest_contact();
		*index = 8;
		i = 7;
	}
	std::cout << "adding new contact to the PhoneBook!! fill the following informations"<< std::endl ;
	std::cout << "first name : ";
	if (!std::getline(std::cin,str))
	{
		(*index)--;
		std::cin.clear();
		clearerr(stdin);
		std::cout << std::endl;
		return ; 
	}
	contacts[i].setFname(str);

	std::cout << "last name : ";
	if (!std::getline(std::cin,str))
	{
		(*index)--;
		std::cin.clear();
		clearerr(stdin);
		std::cout << std::endl;
		return ; 
	}
	contacts[i].setLname(str);

	std::cout << "nickname : ";
	if (!std::getline(std::cin,str))
	{
		(*index)--;
		std::cin.clear();
		clearerr(stdin);
		std::cout << std::endl;
		return ; 
	}
	contacts[i].setNickname(str);

	std::cout << "phone number : ";
	if (!std::getline(std::cin,str))
	{
		(*index)--;
		std::cin.clear();
		clearerr(stdin);
		std::cout << std::endl;
		return ; 
	}
	contacts[i].setPhoneNbr(str);

	std::cout << "darkest secret : ";
	if (!std::getline(std::cin,str))
	{
		(*index)--;
		std::cin.clear();
		clearerr(stdin);
		std::cout << std::endl;
		return ; 
	}
	contacts[i].setDsecret(str);
}

int parseValue(std::string value)
{
	int k = 0;

	if (value.empty())
		return -1;

	if (value[0]== '+')
		k++;
	for (size_t i = k; i < value.length(); ++i)
		if (!isdigit(value[i]))
			return -1;

	int index = std::atoi(value.c_str());

	if (index < 0 || index > 7)
		return -1;

	return index;
}

void	PhoneBook::SEARCH(int PBsize)
{
	int			index;
	std::string	value;

	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------- ---------- ---------- ---------- " << std::endl;

	for (int i = 0; i < 8; i++)
		display_contacts(contacts[i], i);
	std::cout << "enter a contact index : ";
	if (!getline(std::cin,value))
	{
		std::cin.clear();
		clearerr(stdin);
		std::cout << std::endl;
		return;
	}
	index = parseValue(value);
	if (index >= PBsize || (index < 0))
	{
		std::cout << "contact doesn't existe" << std::endl;
		return ;
	}
	display_uno_contact(index);
}





void 		Contact::setFname(std::string f_name)
{
	first_name = f_name;
}
std::string Contact::getFname()
{
	return (first_name);
}
void 		Contact::setLname(std::string l_name)
{
	last_name = l_name;
}
std::string Contact::getLname()
{
	return (last_name);
}
void 		Contact::setNickname(std::string nickname_)
{
	nickname = nickname_;
}
std::string Contact::getNickname()
{
	return (nickname);
}
void 		Contact::setPhoneNbr(std::string phoneNbr)
{
	phonenumber = phoneNbr;
}
std::string Contact::getPhoneNbr()
{
	return (phonenumber);
}
void 		Contact::setDsecret(std::string dark_s)
{
	darkest_secret = dark_s;
}
std::string Contact::getDsecret()
{
	return (darkest_secret);
}