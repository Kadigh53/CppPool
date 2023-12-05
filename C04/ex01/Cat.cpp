/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:30:08 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/05 18:56:00 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	brain = new Brain();
}

Cat::Cat(std::string type_)
	: Animal(type_)
{
	brain = new Brain();
}

Cat::Cat(const Cat& other )
	: Animal(other)
{
	if (this != &other)
	{
		this->brain = new Brain();
	}
}

void Cat::makeSound() const
{
	std::cout << type + " is Meowing "<< std::endl;
}

Cat& Cat::operator=( const Cat& other )
{
	if (this != &other)
	{
		Animal::operator=(other);
		// this->brain
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
}
