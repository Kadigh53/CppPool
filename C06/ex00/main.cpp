/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:15:28 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/11 03:06:57 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Need more params\n" ;
		return 1;
	}
	ScalarConverter::convert(av[1]);

	// long a= 1;
	// std::cout << sizeof(a) << std::endl;
}
