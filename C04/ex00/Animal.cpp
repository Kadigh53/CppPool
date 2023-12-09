/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:28:54 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/09 02:45:24 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	: type("Anonym")
{
	std::cout << "Animal " << type << " Constructor" << std::endl;
}

Animal::Animal(std::string type_) 
	: type(type_)
{
	std::cout << "Animal " << type << " ParamConstructor" << std::endl;
}

Animal::Animal( const Animal& other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Animal " << type << " CopyConstructor" << std::endl;

}

Animal& Animal::operator=( const Animal& other )
{
	if (this != &other)
		this->type = other.type;
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
{
	std::cout << type << " Animal " << " Destructor" << std::endl;
}