/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:42:30 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/01 15:52:41 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() :name("NoNamedForm"), signd(false), grade(100)
{}

Form::Form( std::string nm, int grd) :name(nm), signd(false), grade(grd)
{
	if (grd > 150 )
		throw GradeTooLowException();
	else if (grd < 1)
		throw GradeTooHighException();
}

Form::Form( const Form& other ) :name(other.name), grade(other.grade)
{
	if (this != &other)
		this->signd = other.signd;
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
	{
		this->signd = other.signd;
	}
	return *this;
}

const char *Form::GradeTooHighException::what() const _NOEXCEPT
{
	return ("Grade Too High");
}
const char *Form::GradeTooLowException::what() const _NOEXCEPT
{
	return ("Grade Too Low");
}

const std::string Form::getName( void )
{
	return (this->name);
}
bool	Form::getSign( void )
{
	return (this->signd);
}
int Form::getGrade( void )
{
	return (this->grade);
}

void Form::beSigned( Bureaucrat& officer )
{
	if (officer.getGrade() <= this->grade)
		this->signd = true;
	else
		throw Form::GradeTooLowException();
}

Form::~Form()
{}