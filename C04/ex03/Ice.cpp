/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:18:13 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/10 00:36:10 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
	: AMateria("ice")
{}
Ice::Ice( const Ice& other )
	: AMateria(other.type_)
{}
Ice& Ice::operator=( const Ice& other )
{
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}
Ice::~Ice()
{}

AMateria* Ice::clone() const
{
	Ice *x = new Ice(*this);
	return (x);
}
void Ice::use(ICharacter& target)
{
	std::cout << this->type_
		<< ": \"* shoots an ice bolt at " << target.getName() <<" *" 
		<< std::endl;
}