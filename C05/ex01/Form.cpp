/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:42:30 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/07 07:50:09 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
	:name("NoNamedForm"),
	RequiredSignGrade(150),
	RequiredExecGrade(150),
	signd(false)
{}

Form::Form( std::string nm, int signGrd, int execGrd)
	:name(nm),
	RequiredSignGrade(signGrd),
	RequiredExecGrade(execGrd),
	signd(false)
{
	if (signGrd > 150 )
		throw GradeTooLowException();
	else if (signGrd < 1)
		throw GradeTooHighException();
}

Form::Form( const Form& other )
	:name(other.name),
	RequiredSignGrade(other.RequiredSignGrade),
	RequiredExecGrade(other.RequiredExecGrade)
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
bool	Form::getSignature( void )
{
	return (this->signd);
}
int Form::getSingGrade( void )
{
	return (this->RequiredSignGrade);
}
int Form::getExecGrade( void )
{
	return (this->RequiredExecGrade);
}

void Form::beSigned( Bureaucrat& officer )
{
	if (officer.getGrade() <= this->RequiredSignGrade)
		this->signd = true;
	else
		throw Form::GradeTooLowException();
}

Form::~Form()
{}