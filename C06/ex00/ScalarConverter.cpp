/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:16:07 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/12 00:09:12 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{}
// ScalarConverter::ScalarConverter(const ScalarConverter& other)
// {}
// ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
// {}

bool NondisplayableChars(long long c)
{
	return (c < 32 || c > 127);
}
void charConversion(std::string Input)
{
	if (NondisplayableChars(Input[0]))
		std::cout << "char : Non Displayable\n";
	else
		std::cout << "char : " << Input[0]<<"\n";

	std::cout << "int :" << static_cast<int>(Input[0]) <<"\n";
	std::cout << "float :" << static_cast<float>(Input[0]) <<"f\n";
	std::cout << "double :" << static_cast<double>(Input[0]) <<"\n";
}

void ConversionOfNan()
{
	std::cout << "char : Impossible\n";
	std::cout << "int : Impossible\n"; 
	std::cout << "float :nanf\n";
	std::cout << "double :nan\n";
}
void ConversionOfInf(double Input)
{
	std::cout << "char : Impossible\n";
	std::cout << "int : Impossible\n";
	std::cout << "float :" << static_cast<float>(Input)<< "f\n";
	std::cout << "double :"<< static_cast<double>(Input)<< "\n";
}

void	convertToChar(long double Nbr)
{
	long long l = Nbr;

	if (l > 127 || l < 0)
		std::cout << "char : Impossible\n";
	else if ((l - Nbr))
	{
		std::cout << "char : \'*\'\n";
		return ;
	}
	else if (NondisplayableChars(Nbr))
		std::cout << "char : Impossible\n";
	else
		std::cout << "char : " << Nbr <<"\n";	
}

void	convertToInt(long double Nbr)
{
	long n = Nbr;
	if (n >= INT32_MAX || n <= INT32_MIN)
		std::cout << "int : Impossible\n";
	else 
		std::cout << "int : " << static_cast<int>(Nbr) << std::endl;
}

void	convertToFloat(long double Nbr)
{
	if ((Nbr >= std::numeric_limits<float>::max()) ||(Nbr <= std::numeric_limits<float>::lowest()))
	{
		std::cout << "float : Impossible\n";
		return ;
	}
	std::cout << "float : " <<static_cast<float>(Nbr) << "f\n";
}
void	convertToDouble(long double Nbr)
{
	if ((Nbr >= std::numeric_limits<double>::max()) ||(Nbr <= std::numeric_limits<double>::lowest()))
	{
		std::cout << "double : Impossible\n";
		return;
	}
	std::cout << "double : " <<static_cast<double>(Nbr) << std::endl;
}

void ScalarConverter::convert(std::string Input)
{

	if (Input.length() == 1 && !isdigit(Input[0]))
		return(charConversion(Input));

	char *str = (char *)Input.c_str();
	char *endptr;
	long double Nbr = strtold(str, &endptr);
	if (!Nbr && (endptr == str))
	{
		std::cout << "char : Impossible\n";
		std::cout << "int : Impossible\n";
		std::cout << "float : Impossible\n";
		std::cout << "double : Impossible\n";
		return ;
	}

	if(isnan(Nbr))
	{
		ConversionOfNan();
		return;
	}
	else if (isinf(Nbr))
	{
		ConversionOfInf(Nbr);
		return ;
	}

	convertToChar(Nbr);
	convertToInt(Nbr);
	convertToFloat(Nbr);
	convertToDouble(Nbr);
}

ScalarConverter::~ScalarConverter()
{}
