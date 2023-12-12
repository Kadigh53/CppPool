/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:51:12 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/11 16:26:07 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	:type("WrongAnimal")
{
	std::cout << type << " Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type_)
	:type(type_)
{
	std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
	if (this != &other)
		this->type = other.type;
	std::cout << type << " CopyConstructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout <<  "WrongAnimal Destructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other )
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "The " << type << " make sound ???????" << std::endl;
}