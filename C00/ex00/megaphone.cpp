/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:26:14 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/22 23:38:48 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	std::string str;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i < ac; i++)
		{
			str = av[i];
			for (size_t j = 0; j < str.length(); j++)
				str[j] = toupper(str[j]);
			std::cout << str << " " ;
		}
	}
	std::cout << std::endl;
}
