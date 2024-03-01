/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:40:34 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/01 15:47:32 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("Anonym"), grade(150)
{}
Bureaucrat::Bureaucrat(std::string name_, int grd)
	: name(name_)
{
	if (grd > 150)
		throw GradeTooLowException();
	else if (grd < 1)
		throw GradeTooHighException();
	else
		this->grade = grd;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) 
	:name(other.name) ,grade(other.grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->grade = other.getGrade();
	}
	return (*this);
}
std::string Bureaucrat::getName( void ) const
{
	return (this->name);
}

int			Bureaucrat::getGrade( void ) const
{
	return (this->grade);
}

void Bureaucrat::GradeIncrement( int grd )
{
	if ((this->grade - grd) < 1)
		throw GradeTooHighException();
	else
		this->grade -= grd;
}
void Bureaucrat::GradeDecrement( int grd )
{

	if ((this->grade + grd ) > 150)
		throw GradeTooLowException();
	else
		this->grade += grd;
}
void Bureaucrat::signForm( Form frm )
{
	try
	{
		frm.beSigned(*this);
		std::cout << name << " signed " << frm.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn't sign " << frm.getName()
				<< " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
	return "Too high grade";
}
const char* Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
	return "Too Low Grade";
}

Bureaucrat::~Bureaucrat()
{
	
}
