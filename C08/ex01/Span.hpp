/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 06:43:27 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/18 01:48:35 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>

typedef	std::vector<int>	IntVect;

class Span
{
private :
	IntVect			span;
	unsigned int	N;
public :
	class FullContainer : public std::exception 
	{
	public :
		const char* what() const _NOEXCEPT
		{
			return "the Container is Full, no place left";
		}
	};
	Span();
	Span(int maxNbrs);
	Span(const Span& other);
	Span& operator=(const Span& other);

	void    addNumber( int nbr );

	int	shortestSpan();
	int	longestSpan();
	~Span();
};

#endif
