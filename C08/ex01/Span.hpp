/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 06:43:27 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/17 07:14:01 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private :
	unsigned int		N;
	std::vector<int>	vect;
public :
	Span();
	Span(const Span& other);
	Span& operator=(const Span& other);

	void    addNumber()
	{}

	~Span();
};

#endif
