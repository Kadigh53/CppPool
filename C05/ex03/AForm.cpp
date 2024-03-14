/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:47:57 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/06 21:39:27 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
	:name("Anonym"),
	RequiredSignPoints(150),
	RequiredExecPoints(150),
	signd(false),
	target("NoNameTarget")
{}
AForm::AForm(std::string nm_, int toSign, int toExec, std::string trgt)
	:name(nm_),
	RequiredSignPoints(toSign),
	RequiredExecPoints(toExec),
	signd(false),
	target(trgt)
{}
AForm::AForm(const AForm& other)
	: name(other.GetName()),
	RequiredSignPoints(other.GetRequiredSignPoints()),
	RequiredExecPoints(other.GetRequiredExecPoints()),
	target(other.GetTarget())
{
	if (this != &other)
		this->signd = other.signd;
}
AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
	{
		target = other.GetName();
		this->signd = other.signd;
	}
	return (*this);
}

const char*	AForm::GradeTooHighException::what() const _NOEXCEPT
{
	return ("Grade Too High");
}
const char*	AForm::GradeTooLowException::what() const _NOEXCEPT
{
	return ("Grade Too Low");
}
const char*	AForm::NotSignedForm::what() const _NOEXCEPT
{
	return ("Not Signed Form");
}
std::string AForm::GetName( void ) const
{
	return(this->name);
}
std::string	AForm::GetTarget( void ) const
{
	return (this->target);
}

int AForm::GetRequiredSignPoints( void ) const
{
	return(this->RequiredSignPoints);
}
int AForm::GetRequiredExecPoints( void ) const
{
	return(this->RequiredExecPoints);
}
bool AForm::GetSignature() const
{
	return (this->signd);
}
void AForm::beSigned(Bureaucrat& Modir)
{
	if (Modir.getGrade() <= this->RequiredSignPoints)
		this->signd = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

void AForm::CheckRequirements(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->GetRequiredExecPoints() )
		throw Bureaucrat::GradeTooLowException();
	else if (!this->GetSignature())
		throw NotSignedForm();
}

AForm::~AForm()
{}
