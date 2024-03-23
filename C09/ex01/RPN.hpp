/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:46:49 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/23 16:14:20 by aaoutem-         ###   ########.fr       */
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
	RPN();
	// RPN(const RPN& other);
	// RPN& operator=(const RPN& other);

	void PerforformCalcul(std::string str);
	void operation( char op);

	~RPN();
};

#endif
