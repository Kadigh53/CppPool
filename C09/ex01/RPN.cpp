/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:47:17 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/11/19 16:30:52 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{}
RPN::RPN(const RPN& other)
{
	if (this != &other)
	{
		this->stck = other.stck;
	}
}
RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
	{
		this->stck = other.stck;
	}
	return *this;
}

void  RPN::parseInput(std::string expression)
{
	size_t pos = expression.find_first_not_of("0123456789+-*/ ");
	if (pos != std::string::npos)
		throw Error();

	for (size_t i = 0; i < expression.length(); i++)
	{
		if (expression[i] == ' ')
		{
			expression.erase(i, 1);
			i--;
		}
	}
	if (expression.length() < 3 || !isdigit(expression[0]) || !isdigit(expression[1]))
		throw Error();

	int k = 0;
	for (size_t i = 0; i < expression.length(); i++)
	{
		if (isdigit(expression[i]))
			k++;
		else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
			k--;
		else if (k < 1)
			throw Error();
		else
			throw Error();
	}
	if (k != 1)
		throw Error();
}

void RPN::operation( char op)
{
	int b = stck.top();
	stck.pop();
	int a = stck.top();
	stck.pop();

	if (op == '+')
		stck.push(a + b);
	else if (op == '-')
		stck.push(a - b);
	else if (op == '*')
		stck.push(a * b);
	else if (op == '/')
		stck.push(a / b);
}

void    RPN::PerforformCalcul(std::string expression)
{
	parseInput(expression);
	for (size_t i = 0; i < expression.length(); i++)
	{
		if(isdigit(expression[i]))
			this->stck.push(expression[i] - '0');
		else if (expression[i] == '+')
			operation('+');
		else if (expression[i] == '-')
			operation('-');
		else if (expression[i] == '*')
			operation('*');
		else if (expression[i] == '/')
			operation('/');
	}
	int result = stck.top();
	stck.pop();
	std::cout << result << std::endl;
}

RPN::~RPN()
{}
