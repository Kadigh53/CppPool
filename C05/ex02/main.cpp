/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:46:52 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/06 06:00:03 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
    {
        ShrubberyCreationForm frm;
        Bureaucrat modir("bihi", 144);
        modir.signForm(&frm);
        modir.executeForm(frm);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
