/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 07:09:41 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/19 08:11:17 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(10)
{}
Span::Span(int maxNbrs) : N(maxNbrs)
{}
// Span::Span(const Span& other)
// {}

// Span& Span::operator=(const Span& other)
// {}
void    Span::addNumber(int nbr)
{
	if (span.size() == N)
		throw FullContainer();// throw an exception
	span.push_back(nbr);
}

void	Span::fillSpan(VectIt eb, VectIt ee)
{
	// parse the iterator here 
	if ( eb >= ee )  // or ee < eb
	{
		// throw an exception 
		return ;
	}
	for (VectIt it = eb; it != ee && this->span.size() < this->N; it++)
	{
		this->span.push_back(*it);
	}
}

int	Span::shortestSpan()
{
	if (!std::is_sorted(this->span.begin(), this->span.end()))
		std::sort(this->span.begin(), this->span.end());
	for (int i = 1; i < span.size(); i++)
	{
		if (span[i] - span[i - 1 ] < shortestspan)
			shortestspan = span[i] - span[i - 1 ];
	}
	return (shortestspan);
}
int	Span::longestSpan()
{
	if (!std::is_sorted(this->span.begin(), this->span.end()))
		std::sort(this->span.begin(), this->span.end());
	return (span[span.size() - 1] - span[0]);
}
Span::~Span()
{}
