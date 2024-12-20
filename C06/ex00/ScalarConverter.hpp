/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:15:09 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/11 06:07:18 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

class ScalarConverter
{
private :
public :
	ScalarConverter();
	// ScalarConverter(const ScalarConverter& other);
	// ScalarConverter& operator=(const ScalarConverter& other);

	static void convert(std::string var);

	~ScalarConverter();
};

#endif
