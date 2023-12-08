/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:28:54 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/08 03:29:02 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	: type("NonType ")
{
}

Animal::Animal(std::string type_) 
	: type(type_)
{}

Animal::Animal( const Animal& other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
}

Animal& Animal::operator=( const Animal& other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "the " + type + " sounds ???"<< std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::setType(std::string typeToSet)
{
	type = typeToSet;
}

Animal::~Animal()
{}