/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:42:30 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/02/01 21:21:35 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :name("NoNamedForm"), signd(false), grade(100)
{}
Form::Form( std::string nm, int grd) :name(nm), signd(false), grade(grd)
{}
Form::Form( const Form& other ) :name(other.name), grade(other.grade)
{
	if (this != &other)
	{
		this->signd = other.signd;
	}
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

void Form::beSigned( Bureaucrat& agent )
{
	if (agent.getGrade() <= this->grade)
		this->signd = true;
	else
		throw GradeTooLowException();
}

Form::~Form()
{}