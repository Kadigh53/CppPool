/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:29:31 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/17 02:57:28 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class	PhoneBook {
	std::string contacts[8];
};

class	Contact {
	std::string	f_name;
	std::string	l_name;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkest_secret;
};

#endif