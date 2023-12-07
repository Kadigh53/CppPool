/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:18:06 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/07 03:47:26 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
	: AMateria("cure")
{}
Cure::Cure( const Cure& other )
	: AMateria(other.type_)
{}
Cure::~Cure()
{}
Cure& Cure::operator=( const Cure& other )
{
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

AMateria* Cure::clone() const
{
	Cure *x = new Cure(*this);
	return (x);
}

void Cure::use(ICharacter& target)
{
	std::cout << this->type_ 
		<<": \"* heals " << target.getName() <<"’s wounds *"
		<< std::endl;
}
