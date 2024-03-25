/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:43:53 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/23 16:36:20 by aaoutem-         ###   ########.fr       */
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

	try
	{
		RPN rpn;
		rpn.PerforformCalcul(str);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}