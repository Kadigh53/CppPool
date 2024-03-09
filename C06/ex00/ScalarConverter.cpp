/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:16:07 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/09 08:15:11 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{}
// ScalarConverter::ScalarConverter(const ScalarConverter& other)
// {}
// ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
// {}

void ScalarConverter::convert(std::string var)
{
	

	int value;
	std::cout <<"char:" << static_cast<char>(value) << std::endl;
	std::cout <<"int:" << static_cast<int>(value) << std::endl;
	std::cout <<"float:" << static_cast<float>(value) << std::endl;
	std::cout <<"double:" << static_cast<double>(value) << std::endl;
}

ScalarConverter::~ScalarConverter()
{}