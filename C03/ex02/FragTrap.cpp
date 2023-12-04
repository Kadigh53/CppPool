/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:10:18 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/01 21:27:16 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap " << name << " Constructor Called." << std::endl;
}

FragTrap::FragTrap(std::string name_) : ClapTrap(name_)
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap " << name << " Constructor Called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.name)
{
	if (this != &other)
	{
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	std::cout << "FragTrap " << name << " Copy Constructor called." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "FragTrap" << other.name 
				<< " is being assigned to another FragTrap" << std::endl;
	}
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " gives a positive high fives request" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << name << " Destructor called." << std::endl;
}