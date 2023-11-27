/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:10:51 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/27 09:01:05 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"


ClapTrap::ClapTrap( void )
	: name("anonyme")
	, HitPoints(10)
	, EnergyPoints(10)
	, AttackDamage(0)
{
	std::cout << "ClapTrap " << name << " Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name_)
	: name(name_)
	, HitPoints(10)
	, EnergyPoints(10)
	, AttackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructor called.." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other )
{
	if (this != &other)
	{
		this->name = other.name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	std::cout << "Another ClapTrap " << name << " Copy constructor called." << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
		std::cout << "ClapTrap " << other.name 
				<< " is being assigned to another ClapTrap" << std::endl;
    }
    return *this;
}

ClapTrap::~ ClapTrap()
{
	std::cout << "ClapTrap " << name << " death..." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if ((this->HitPoints > 0) && (this->EnergyPoints > 0))
	{
		this->EnergyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target
				  << " causing " << AttackDamage << " points of damage!" << std::endl;
	}
	else
	{
		if (!this->HitPoints)
			std::cout << name << " Rests in peace." << std::endl;
		else
			std::cout << name << " has no Energy to Attack" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int	remainHitPoints ;

	if (HitPoints > 0)
	{
		remainHitPoints = this->HitPoints - amount;
		if (remainHitPoints < 0)
			this->HitPoints = 0;
		else
			this->HitPoints = remainHitPoints;
		std::cout << name << " under attack, " 
					<< name << " loses " << amount << " HitPoints" << std::endl;
	}
	else
		std::cout << "How could a dead ClapTrap take more Damage "
			 << name << " is already in graveyard " << std::endl ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->HitPoints > 0) && (this->EnergyPoints > 0))
	{
		this->EnergyPoints--;
		this->HitPoints += amount;
		std::cout << "ClapTrap " << name << " recovers "
				<< amount << " HitPoints\\m/" << std::endl;
	}
	else
	{
		if (!this->HitPoints)
			std::cout << name << " Rests in peace." << std::endl;
		else
			std::cout << "ClapTrap " << name << " has no Energy to Repair '~ " << std::endl;
	}
}
