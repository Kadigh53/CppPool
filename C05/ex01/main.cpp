/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:42:28 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/02/01 21:23:00 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

int main()
{
	try
	{
		Form frm("lbanka", 99);
		Bureaucrat modir("hmad", 100);
		modir.signForm(frm);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}