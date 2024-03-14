/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:40:46 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/07 07:45:18 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& out, Bureaucrat &b)
{
	out << b.getName() << ",  bureaucrat grade " <<b.getGrade();
	return out;
}

int	main()
{
	try
	{
		Bureaucrat b("hmad", -200);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b0("ali", 150);
		Bureaucrat b1("ali1", 150);
		b0.GradeIncrement(100);
		std::cout << b0 << std::endl;
		b0.GradeDecrement(1000);
		std::cout << b0 << std::endl;
		b0.GradeIncrement(1000);
		std::cout << b0 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}