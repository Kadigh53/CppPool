/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:36:22 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/06 08:15:40 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", 145, 137)
{}
ShrubberyCreationForm::ShrubberyCreationForm(std::string trgt)
	: AForm("ShrubberyCreationForm", 145, 137), target(trgt)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other.name, other.GetRequiredSignPoints(), other.GetRequiredExecPoints())
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	// this->AForm::operator=(other);
}



void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	CheckRequirements(executor);

	std::ofstream myfile;
	myfile.open(executor.getName() + "_shrubbery.txt");

	myfile << "       ###o\n";
	myfile << "      #o####o\n";
	myfile << "    ##\\###o###\n";
	myfile << "   #o#\\#|#/###\n";
	myfile << "    ###\\|/#o#\n";
	myfile << "      # {|}  #\n";
	myfile << "        {|}\n";
	myfile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}
