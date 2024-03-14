/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:46:52 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/07 02:46:01 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
    {
        Intern stajir;
        AForm* frm = stajir.makeForm("shrubbery creation", "Home");
        AForm* rbt = stajir.makeForm("robotomy request", "rqt");
        AForm* prsdnt = stajir.makeForm("presidential pardon", "slave");
        
        Bureaucrat modir("bihi", 1);
        modir.signForm(frm);
        modir.executeForm(*frm);
        std::cout << "\n";

        modir.signForm(rbt);
        modir.executeForm(*rbt);
        std::cout << "\n";

        modir.signForm(prsdnt);
        modir.executeForm(*prsdnt);
        std::cout << "\n";
        delete frm;
        delete rbt;
        delete prsdnt;
    }
    catch(const std::exception& e)
    {
        std::cerr << "oma here \n";
        std::cerr << e.what() << '\n';
    }
}


