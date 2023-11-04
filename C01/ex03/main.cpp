/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:45:57 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/04 13:42:20 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
private :
	std::string _type;
public :
	Weapon(std::string weapontype);
	const std::string &getType() const;
	void setType(std::string weapontype);
};

Weapon::Weapon(std::string weapontype)
{
	_type = weapontype;
}

const	std::string &Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string weapontype)
{
	_type = weapontype;
}

class HumanA
{
private :
	std::string	_name;
	Weapon		&_wpn;
public :
	HumanA(std::string HumaneName, Weapon &HumanWpn);
	void attack();
};

HumanA::HumanA(std::string HumaneName, Weapon &HumanWpn)
	: _name(HumaneName), _wpn(HumanWpn)
{
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _wpn.getType() << std::endl;
}


class HumanB
{
private :
	std::string	_name;
	//Use a pointer to Weapon when the Weapon object is not owned by the class that is using it.
	// Use a pointer to Weapon when the Weapon object may be null.
	Weapon		*_wpn; 
public :
	HumanB(std::string HumaneName);
	void setWeapon(Weapon &HumanWpn);
	void attack();
};

HumanB::HumanB(std::string HumaneName)
	: _name(HumaneName), _wpn(NULL)
{
}

void	HumanB::setWeapon(Weapon &HumanWpn)
{
	_wpn = &HumanWpn;
}

void	HumanB::attack()
{
	if (_wpn)
		std::cout << _name << " attacks with their " << _wpn->getType() << std::endl;
	else
	std::cout << _name << " has no weapons to attack" << std::endl;
}

void func()
{
	int a;
}

int main()
{
	{
		Weapon club = Weapon(" lkatorza ");
		HumanA Hmad("Hmad", club);
		Hmad.attack();
		club.setType("zizwara");
		Hmad.attack();
		// void (*f)() = func;
		// printf("%p\n",(void *)func );
	}
	// {
	// 	Weapon club = Weapon("crude spiked club");
	// 	HumanB jim("Jim");
	// 	jim.attack();
	// 	// jim.setWeapon(club);
	// 	// club.setType("some other type of club");
	// 	// jim.attack();
	// }
	return 0;
}
