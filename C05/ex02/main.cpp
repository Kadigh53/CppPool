/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:46:52 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/06 21:57:06 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
	try
    {
        ShrubberyCreationForm frm("Home");
        RobotomyRequestForm rbt("rqt");
        PresidentialPardonForm prsdnt("slave");
        Bureaucrat modir("bihi", 1);
        modir.signForm(&frm);
        modir.executeForm(frm);
        std::cout << "\n";

        modir.signForm(&rbt);
        modir.executeForm(rbt);
        std::cout << "\n";

        modir.signForm(&prsdnt);
        modir.executeForm(prsdnt);
        std::cout << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
