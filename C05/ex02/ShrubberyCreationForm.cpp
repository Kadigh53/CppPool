/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:36:22 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/02/08 10:34:09 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm() 
	: AForm("ShrubberyCreationForm", 145, 137)
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

	std::ofstream myfile;
	myfile.open(executor.getName() + "_shrubbery");

	myfile << "       ###o\n";
	myfile << "      #o####o\n";
	myfile << "    ##\\###o###\n";
	myfile << "   #o#\\#|#/###\n";
	myfile << "    ###\\|/#o#\n";
	myfile << "      # }|{  #\n";
	myfile << "        }|{\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}
