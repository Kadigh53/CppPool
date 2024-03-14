/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 00:50:32 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/07 02:35:44 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{}
Intern::Intern(const Intern& other)
{
    (void)other;
}
Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return (*this);
}
const char* Intern::FormDoesntExist::what() const _NOEXCEPT
{
    return ("form name doesn't exist");
}
AForm* Intern::makeForm(std::string name,std::string target)
{
    std::string forms[4] = {"" ,"shrubbery creation", "robotomy request", "presidential pardon"};

    int formIdx  = 0 + 1*(forms[1] == name) + 2*(forms[2] == name) + 3*(forms[3] == name) ;

    switch ( formIdx )
    {
    case 1:
        return new ShrubberyCreationForm(target);
    case 2:
        return new RobotomyRequestForm(target);
    case 3:
        return new PresidentialPardonForm(target);
    default:
        throw FormDoesntExist();
    }
}
Intern::~Intern()
{}