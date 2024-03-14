/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:52:56 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/07 07:52:19 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
	:AForm("RobotomyRequestForm", 72, 45, "NoNameTarget")
{}
RobotomyRequestForm::RobotomyRequestForm(std::string trgt)
	:AForm("RobotomyRequestForm", 72, 45, trgt)
{}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other)
{}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	AForm::operator=(other);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	CheckRequirements(executor);

	std::time_t currentTime = std::time(0);

	int randomNbr = currentTime % 2;
	std::cout << "drilling noises ...\n";

	if(randomNbr)
		std::cout << this->target << " has been robotomized successfully.\n";
	else
		std::cout << this->target << " robotomization failed.\n";
}
RobotomyRequestForm::~RobotomyRequestForm()
{}
