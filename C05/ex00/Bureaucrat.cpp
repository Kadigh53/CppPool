/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:40:34 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/01/28 15:16:41 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}
Bureaucrat::Bureaucrat(std::string name_, int grd)
	: name(name_)
{
	if (grd > 150)
		throw 1;
	else if (grd < 1)
		throw "1";
	else
		this->grade = grd;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{}
Bureaucrat& Bureaucrat::operator++()
{}
Bureaucrat& Bureaucrat::operator++( int )
{}
Bureaucrat& Bureaucrat::operator--()
{}
Bureaucrat& Bureaucrat::operator--( int )
{}
std::string Bureaucrat::getName( void )
{
	return (this->name);
}
void		Bureaucrat::setGrade( int grd)
{
	// check for too high/too low grade and throw exception
	this->grade = grd;
}

void		Bureaucrat::setName( std::string nm )
{
	this->name = nm;
}
int			Bureaucrat::getGrade( void )
{
	return (this->grade);
}


Bureaucrat::~Bureaucrat()
{}