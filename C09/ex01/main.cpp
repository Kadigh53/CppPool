/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:43:53 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/23 16:23:45 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void print(std::string str){
	std::cout << str <<std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
		return(print("Usage: ./RPN \"expression\""), 0);

	std::string str(av[1]);

	size_t pos = str.find_first_not_of("0123456789+-*/ ");
	if (pos != std::string::npos)
		return(print("Error 0"), 0);

	//erase spaces from the string
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			str.erase(i, 1);
	}
	if (str.length() < 3 || !isdigit(str[0]) || !isdigit(str[1]))
		return(print("Error 1"), 0);

	int k = 0;
	// check if input String is a correct RPN expression
	for (size_t i = 0; i < str.length(); i++)
	{
		if (k == ' ')
			continue;
		else if (isdigit(str[i]))
			k++;
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
			k--;
		else if (k < 1)
			return(print("Error 2"), 0);// failure
		else
			return(print("Error 2"), 0);
	}
	if (k != 1)
		return(print("Error"), 0); // expression is not correct

	RPN rpn;
	rpn.PerforformCalcul(str);

	return 0;
}