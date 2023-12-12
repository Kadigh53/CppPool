/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:29:47 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/09 07:17:38 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	: type("Anonym")
{
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(std::string type_) 
	: type(type_)
{
	std::cout << "Animal ParamConstructor Called" << std::endl;
}

Animal::Animal( const Animal& other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Animal CopyConstructor Called" << std::endl;
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
	std::cout << "the Animal Sounds ???"<< std::endl;
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
{
	std::cout << "the Animal Destructor "<< std::endl;
}