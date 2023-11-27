/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:10:11 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/27 09:13:14 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap " << name << " Constructor called." << std::endl;
}
ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap " << name << " Constructor called." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other )
			: ClapTrap(other.name)
{
	if (this != &other)
	{
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	std::cout << "ScavTrap " << name << " Copy Constructor called." << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other )
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "ScavTrap" << other.name 
				<< " is being assigned to another ScavTrap" << std::endl;
	}
	return (*this);
}

void ScavTrap::guardGate()
{
	if (HitPoints > 0)
		std::cout << name << " in Gate Guarde mode " << std::endl;
	else
		std::cout << name << "isn't alive so couldn't Put the Guard " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " Destructor called." << std::endl;
}
