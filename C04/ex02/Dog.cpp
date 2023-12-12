/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:30:20 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/09 07:18:58 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	this->brain = new Brain();
	std::cout << type + " Constructor Called" << std::endl;
}

Dog::Dog( std::string type_ )
	: Animal(type_)
{
	this->brain = new Brain();
	std::cout << type + " ParamConstructor Called" << std::endl;
}

Dog::Dog( const Dog& other )
	: Animal(other)
{
	if (this == &other)
		return ;
	std::string idea;

	this->brain = new Brain();
	for (int i = 0; i < NBR_ofIDeas; i++)
	{
		idea = other.brain->getIdea(i);
		this->brain->setIdea(i, idea);
	}
	std::cout << type + " CopyConstructor Called" << std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
	if (this != &other)
	{
		Animal::operator=(other);

		std::string idea;
		delete this->brain;
		this->brain = new Brain();
		for (int i = 0; i < NBR_ofIDeas; i++)
		{
			idea = other.brain->getIdea(i);
			this->brain->setIdea(i, idea);
		}
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << type + " is Bracking...Haw. HawHaw "<< std::endl;
}

std::string Dog::getIdea(int idx)
{
	return (brain->getIdea(idx));
}

void Dog::setIdea(int idx, std::string idea)
{
	this->brain->setIdea(idx, idea);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor Called" << std::endl;
}
