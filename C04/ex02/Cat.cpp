/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 02:16:29 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/06 02:16:31 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{}

Cat::Cat(std::string type_)
	: Animal(type_)
{}

Cat::Cat(const Cat& other )
	: Animal(other)
{}

void Cat::makeSound() const
{
	std::cout << type + " is Meowing "<< std::endl;
}

Cat& Cat::operator=( const Cat& other )
{
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

Cat::~Cat(){}
