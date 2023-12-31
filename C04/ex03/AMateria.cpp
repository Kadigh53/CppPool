/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:29:55 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/11 05:58:24 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria()
	: type_("Undefined")
{
	if (SPEAKER)
		std::cout << "default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
	: type_(type)
{
	if (SPEAKER)
		std::cout << "Parametrized Constructor called" << std::endl;
}

AMateria::AMateria( const AMateria& other )
{
	if (SPEAKER)
		std::cout << "Copy Constructor called" << std::endl;
	if (this != &other)
	{
		this->type_ = other.type_;
	}
}
AMateria& AMateria::operator=( const AMateria& other )
{
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return (type_);
}

void AMateria::use(ICharacter& target)
{
	std::cout <<"this Character uses" << this->type_ 
		<< ": on the amateria" << target.getName() << std::endl;
}
