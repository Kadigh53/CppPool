/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:52:56 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/06 07:55:53 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
	:AForm("RobotomyRequestForm", 72, 45)
{}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other.GetName(), other.GetRequiredSignPoints() ,other.GetRequiredExecPoints())
{}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	CheckRequirements(executor);

	int randomNbr = std::rand() % 2;
	std::cout << "drilling noises ...\n" << "drilling noises ...\n";

	if(randomNbr)
		std::cout << executor.getName() << " has been robotomized successfully.\n";
	else
		std::cout << executor.getName() << " robotomization failed.\n";
}
RobotomyRequestForm::~RobotomyRequestForm()
{}
