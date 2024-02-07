/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:36:22 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/02/07 06:09:53 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(145, 137)
{}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	// this->AForm::operator=(other);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->RequiredExec)
		throw Bureaucrat::GradeTooLowException();
	else
		;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}