/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:30:08 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/09 07:18:39 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	brain = new Brain();
	std::cout << type + " Constructor Called" << std::endl;
}

Cat::Cat(std::string type_)
	: Animal(type_)
{
	brain = new Brain();
	std::cout << type + " ParamConstructor Called" << std::endl;
}

Cat::Cat(const Cat& other )
	: Animal(other)
{
	if (this == &other)
		return ;
	this->brain = new Brain();

	std::string idea;
	for (int i = 0;i < NBR_ofIDeas; i++)
	{
		idea = other.brain->getIdea(i);
		this->brain->setIdea(i,idea);
	}
	std::cout << type + " CopyConstructor Called" << std::endl;
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
		delete this->brain;
		this->brain = new Brain();
		std::string idea;
		for (int i = 0;i < NBR_ofIDeas; i++)
		{
			idea = other.brain->getIdea(i);
			this->brain->setIdea(i,idea);
		}
	}
	return (*this);
}

std::string Cat::getIdea(int idx)
{
	if (idx >=0 && idx < 101)
		return (brain->getIdea(idx));
	else 
		return ("");
}

void Cat::setIdea(int idx, std::string idea)
{
	if (idx >=0 && idx < 101)
		this->brain->setIdea(idx, idea);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor Called" << std::endl;
}
