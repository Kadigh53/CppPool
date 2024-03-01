/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:52:56 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/02/08 10:57:15 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :AForm("RobotomyRequestForm", 72, 45)
{}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	// to execute a form must be signed first and then it could be excuted
	if (!this->signd) // not sure if i should check for the signing here 
		return ;
	if (executor.getGrade() > this->GetRequiredSign())
		throw AForm::GradeTooLowException();

	int randomNbr = std::rand() % 2;
	std::cout << "drilling noises ...\n";
	sleep(1);
	std::cout << "drilling noises ...\n";

	if(randomNbr)
		std::cout << executor.getName() << " has been robotomized successfully.\n";
	else
		std::cout << executor.getName() << " robotomization failed.\n";
}
RobotomyRequestForm::~RobotomyRequestForm()
{}
