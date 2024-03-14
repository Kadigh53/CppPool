/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:15:28 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/12 00:11:09 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Not enough params\n";
		return 1;
	}
	ScalarConverter::convert(av[1]);
}
