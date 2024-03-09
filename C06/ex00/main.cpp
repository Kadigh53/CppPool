/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:15:28 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/09 06:47:44 by aaoutem-         ###   ########.fr       */
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
	return 0;
}
