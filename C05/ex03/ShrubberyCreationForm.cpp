/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:36:22 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/06 21:44:38 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("Shrubbery Creation Form", 145, 137, "NoNameTarget")
{}
ShrubberyCreationForm::ShrubberyCreationForm(std::string trgt)
	: AForm("Shrubbery Creation Form", 145, 137, trgt)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	this->AForm::operator=(other);
	return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	CheckRequirements(executor);

	std::ofstream myfile;
	myfile.open(target + "_shrubbery.txt");

	myfile << "       ###o\n";
	myfile << "      #o####o\n";
	myfile << "    ##\\###o###\n";
	myfile << "   #o#\\#|#/###\n";
	myfile << "    ###\\|/#o#\n";
	myfile << "      # {|}#\n";
	myfile << "        {|}\n";
	myfile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}
