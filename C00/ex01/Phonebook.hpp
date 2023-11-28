/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:22:27 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/28 08:04:11 by aaoutem-         ###   ########.fr       */
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
	void setLname(std::string l_name);
	void setNickname(std::string nickname);
	void setPhoneNbr(std::string phonenumber);
	void setDsecret(std::string dark_s);

	std::string getFname();
	std::string getLname();
	std::string getNickname();
	std::string getPhoneNbr();
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