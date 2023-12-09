/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:46:23 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/08 23:41:07 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << type << " Def Constructor " << std::endl;
}

Cat::Cat(std::string type_)
	: Animal(type_)
{
	std::cout << type << " ParamConstructor " << std::endl;
}

Cat::Cat(const Cat& other )
	: Animal(other)
{
	std::cout << type << " CopyConstructor " << std::endl;
}

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

Cat::~Cat()
{
	std::cout << type << " Destructor " << std::endl;
}
