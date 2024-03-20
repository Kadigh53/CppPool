/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 06:43:27 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/19 07:42:24 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>

typedef	std::vector<int>	IntVect;
typedef std::vector<int>::iterator VectIt;

class Span
{
private :
	unsigned int	N;
	int shortestspan;
public :
	IntVect			span;
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
	// Span(const Span& other);
	// Span& operator=(const Span& other);

	void    addNumber( int nbr );
	void	fillSpan(VectIt eb, VectIt ee);

	int	shortestSpan();
	int	longestSpan();
	~Span();
};

#endif
