/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:42:28 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/01 15:53:30 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form frm("3aqd zdiyad", 99);
		Bureaucrat modir("bihi", 100);
		modir.signForm(frm);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
