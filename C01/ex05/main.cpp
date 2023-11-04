/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:08:08 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/04 09:39:17 by aaoutem-         ###   ########.fr       */
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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
}

void	Harl::complain( std::string level )
{
	enum nlevels
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR,
	};
	nlevels lvl;
	lvl = level;
	// std::string levels[4];

	switch (lvl)
	{
		case DEBUG:
		{}
		case INFO:
		{}
		case WARNING:
		
		case  ERROR:
	}
}

int main()
{
}
