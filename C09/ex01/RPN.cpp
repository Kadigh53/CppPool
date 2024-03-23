/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:47:17 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/23 16:15:05 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{}
// RPN::RPN(const RPN& other)
// {}
// RPN& RPN::operator=(const RPN& other)
// {}

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

void    RPN::PerforformCalcul(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if(isdigit(str[i]))
			this->stck.push(str[i] - '0');
		else if (str[i] == '+')
			operation('+');
		else if (str[i] == '-')
			operation('-');
		else if (str[i] == '*')
			operation('*');
		else if (str[i] == '/')
			operation('/');
	}
	int result = stck.top();
	stck.pop();
	std::cout << result << std::endl;
}

RPN::~RPN()
{}
