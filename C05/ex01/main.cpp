/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:42:28 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/07 08:11:53 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try 
	{
		Bureaucrat modir("hmad", 200);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form frm0("3aqd zdiyad", 98, 98);
		Bureaucrat president("bihi", 20);
		president.signForm(frm0);

		Form frm1("chahadt sekna", 97, 97);
		Bureaucrat vicepresident("3li", 99);
		vicepresident.signForm(frm1);
		std::cout << "tests complites "
		
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
