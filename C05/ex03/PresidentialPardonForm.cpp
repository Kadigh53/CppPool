/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:52:46 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/06 21:41:01 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
	: AForm("PresidentialPardonForm", 25, 5, "NoNameTarget")
{}
PresidentialPardonForm::PresidentialPardonForm(std::string trgt)
	: AForm("PresidentialPardonForm", 25, 5, trgt)
{}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	:AForm(other)
{}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	AForm::operator=(other);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	CheckRequirements(executor);
	std::cout << "Zaphod Beeblebrox Pardons " + this->target + "." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}
