/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:52:46 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/06 08:16:40 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	CheckRequirements(executor);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}
