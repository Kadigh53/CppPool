/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:47:57 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/02/08 10:54:05 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
	:name("Anonym"), RequiredSign(150), RequiredExec(150), signd(false)
{}
AForm::AForm(std::string nm_, int toSign, int toExec)
	:name(nm_), RequiredSign(toSign), RequiredExec(toExec), signd(false)
{}
AForm::AForm(const AForm& other)
{}
AForm& AForm::operator=(const AForm& other)
{}

std::string AForm::GetName( void ) const
{
	return(this->name);
}
int AForm::GetRequiredSign( void ) const
{
	return(this->RequiredSign);
}
int AForm::GetRequiredExec( void ) const
{
	return(this->RequiredExec);
}

void AForm::beSigned(Bureaucrat& Modir)
{
	if (Modir.getGrade() <= this->RequiredSign)
		this->signd = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

AForm::~AForm()
{}