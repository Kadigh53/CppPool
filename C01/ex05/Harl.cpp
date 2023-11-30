/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:39:48 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/29 09:19:02 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-"
		<<"triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
			<< "You didn’t put enough bacon in my burger! If you did, "
			<< "I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free."
			 << "I’ve been coming for years whereas you started"
			 << "working here since last month." << std::endl;
}
void	Harl::error( void )
{
	std::cout << "This is unacceptable! "
		"I want to speak to the manager now." << std::endl;
}

typedef void(Harl::*complainlvl)();

void	Harl::complain( std::string level )
{
	int index = ((level == "DEBUG")*1
				+ (level == "INFO")*2
				+ (level == "WARNING")*3
				+ (level == "ERROR")*4);

	complainlvl Complainlvls[5] = {
		NULL,
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	switch (index)
	{
		case 1:
		{
			(this->*Complainlvls[index])();
			break;
		}
		case 2:
		{
			(this->*Complainlvls[index])();
			break;
		}
		case 3:
		{
			(this->*Complainlvls[index])();
			break;
		}
		case 4:
		{
			(this->*Complainlvls[index])();
			break;
		}
		default:
		{
			std::cout << "I ... Who AM I. Harl comlaining level is out of range" << std::endl;
			break;
		} 
	}
}
