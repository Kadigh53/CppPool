/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:46:49 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/11/19 16:31:59 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
private :
	std::stack<int> stck;
public :
	class Error : public std::exception
	{
		const char* what() const throw()
		{
			return "Error";
		}
	};
	RPN();
	RPN(const RPN& other);
	RPN& operator=(const RPN& other);

	void parseInput(std::string expression);
	void PerforformCalcul(std::string expression);
	void operation( char op);

	~RPN();
};

#endif
