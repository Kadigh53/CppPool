/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:22:27 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/27 18:24:56 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>


class	Contact {
private: 
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkest_secret;
public :
	void setFname(std::string f_name);
	std::string getFname();

	void setLname(std::string l_name);
	std::string getLname();

	void setNickname(std::string nickname);
	std::string getNickname();

	void setPhoneNbr(std::string phonenumber);
	std::string getPhoneNbr();

	void setDsecret(std::string dark_s);
	std::string getDsecret();
};

class	PhoneBook {
private :
	Contact	contacts[8];

	void	display_contacts(Contact contact, int index);
	void	display_uno_contact(int index);
	void	remove_oldest_contact( void );

public :

	void	ADD(int *index);
	void	SEARCH(int PBsize);
};

#endif