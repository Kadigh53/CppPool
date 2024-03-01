/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:52:46 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/01 16:27:08 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->signd) //the same here not sure if this is the right way to sign a form 
		return ;
	if (executor.getGrade() > this->GetRequiredExec())
		throw AForm::GradeTooLowException();
	std::cout 
}

PresidentialPardonForm::~PresidentialPardonForm()
{}
