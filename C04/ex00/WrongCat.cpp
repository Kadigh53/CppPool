/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:51:18 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/11 16:26:36 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
	:WrongAnimal("WrongCat")
{
		std::cout << type << " Constructor" << std::endl;
}

WrongCat::WrongCat( std::string type_ )
	:WrongAnimal(type_)
{
	std::cout << type << " Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other )
	: WrongAnimal(other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << type << " CopyConstructor" << std::endl;
}
WrongCat& WrongCat::operator=( const WrongCat& other )
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << type << " Destructor" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << type << " Making Sound olala." << std::endl;
}
