/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:22:27 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/25 09:01:34 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class	Contact {
private: 
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkest_secret;
public :
	void set_first_name(std::string f_name);
	std::string get_first_name();

	void set_last_name(std::string l_name);
	std::string get_last_name();

	void set_nickname(std::string nickname);
	std::string get_nickname();

	void set_phonenumber(std::string phonenumber);
	std::string get_phonenumber();

	void set_darkest_secret(std::string dark_s);
	std::string get_darkest_secret();
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