/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:08:08 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/23 12:58:05 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private :
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public :
	void complain( std::string level );
};

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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

	// void (Harl::*fctPtr)() = &Harl::debug;

	/*
	in c++ every member function is associated to an object
	so if you declare a function pointer you must specify the object the member function it belongs to 
	bcs every methode of the class apart of the user definition its defined as follow obj.methode(class const *this, ...)
	this (holds the address of each object)
	*/
	// void (Harl::*fctPtr)();
	// fctPtr = &Harl::debug;

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
			std::cout << "harl comlaining level is out of range" << std::endl;
			break;
		} 
	}
}

int main()
{
	Harl hrl;
	hrl.complain("INFO");
	
}
