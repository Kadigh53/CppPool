/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:10:11 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/26 20:57:58 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "ScavTrap " << name << "birth..." << std::endl;
}
ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << "birth..." << std::endl;
}
// ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap(other.name)
ScavTrap::ScavTrap( const ScavTrap& other )
			: ClapTrap(other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	std::cout << "Another ScavTrap " << name << "birth..." << std::endl;

}
ScavTrap& ScavTrap::operator=(const ScavTrap& other )
{
	if (this != &other)
	{
		this->name = other.name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return (*this);
}

void ScavTrap::guardGate()
{
	if (HitPoints> 0)
		std::cout << name << " in Gate Guarde mode " << std::endl;
	else
		std::cout << name << "could not Put the Guard " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << "birth..." << std::endl;
}
