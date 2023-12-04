/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:30:14 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/04 19:17:45 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
}
Dog::Dog( std::string type_ )
	: Animal(type_)
{
}
Dog::Dog( const Dog& other )
	: Animal(other)
{
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
{}
