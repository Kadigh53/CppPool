/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:25:26 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/09 03:51:02 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A Brain construct called" << std::endl;
}

Brain::Brain( const Brain& other )
{
	for(int i = 0; i < NBR_ofIDeas; i++)
		this->Ideas[i] = other.Ideas[i];
	std::cout << "A Brain Copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "A Brain Copy destructor called" << std::endl;
}

Brain& Brain::operator=( const Brain& other )
{
	if (this != &other)
	{
		for(int i = 0; i < NBR_ofIDeas; i++)
			this->Ideas[i] = other.Ideas[i];
	}
	return (*this);
}

void Brain::setIdea(int idx, std::string idea)
{
	Ideas[idx] = idea;
}

std::string Brain::getIdea(int idx)
{
	return (Ideas[idx]);
}
