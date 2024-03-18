/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 07:09:41 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/17 21:55:42 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(10)
{}
Span::Span(int maxNbrs) : N(maxNbrs)
{}
Span::Span(const Span& other)
{}

Span& Span::operator=(const Span& other)
{}
void    Span::addNumber(int nbr)
{
	if (span.size() == N)
		throw FullContainer();// throw an exception
	span.push_back(nbr);
}
int	Span::shortestSpan()
{
	
}
int	Span::longestSpan()
{
	
}
Span::~Span()
{}
