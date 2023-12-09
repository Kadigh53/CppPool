/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:30:14 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/09 02:45:33 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << type << " Def Constructor " << std::endl;
}

Dog::Dog( std::string type_ )
	: Animal(type_)
{
	std::cout << type << " ParamConstructor " << std::endl;
}

Dog::Dog( const Dog& other )
	: Animal(other)
{
	std::cout << type << " CopyConstructor " << std::endl;
}

void Dog::makeSound() const
{
	std::cout << type + " is Bracking...Haw. HawHaw "<< std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

Dog::~Dog()
{
	std::cout << type << " Destructor " << std::endl;
}
