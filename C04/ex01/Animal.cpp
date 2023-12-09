/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:29:47 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/09 02:46:58 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal()
	: type("Anonym")
{
	std::cout << type + " Constructor Called" << std::endl;
}

Animal::Animal(std::string type_) 
	: type(type_)
{
	std::cout << type + " ParamConstructor Called" << std::endl;
}

Animal::Animal( const Animal& other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << type + " CopyConstructor Called" << std::endl;
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
	std::cout << "the " + type + " ???"<< std::endl;
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