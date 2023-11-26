/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:10:51 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/26 11:11:16 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap( void )
	: name("anonyme")
	, HitPoints(100)
	, EnergyPoints(50)
	, AttackDamage(20)
{
}

ClapTrap::ClapTrap(std::string name_)
	: name(name_)
	, HitPoints(100)
	, EnergyPoints(50)
	, AttackDamage(20)
{
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
}
ClapTrap& ClapTrap::operator=( const ClapTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return *this;
}
ClapTrap::~ ClapTrap()
{
}

std::string ClapTrap::get_name( void )
{
	return (this->name);
}
unsigned int ClapTrap::get_HitPoints( void )
{
	return (this->HitPoints);
}
unsigned int ClapTrap::get_EnergyPoints( void )
{
	return (this->EnergyPoints);
}
unsigned int ClapTrap::get_AttackDamage( void )
{
	return (this->AttackDamage);
}
void ClapTrap::set_name(std::string name_)
{
	this->name = name_;
}
void ClapTrap::set_HitPoints(unsigned int HitPoints_)
{
	this->HitPoints = HitPoints_;
}
void ClapTrap::set_EnergyPoints(unsigned int EnergyPoints_)
{
	this->EnergyPoints = EnergyPoints_;
}
void ClapTrap::set_AttackDamage(unsigned int AttackDamage_)
{
	this->AttackDamage = AttackDamage_;
}


void ClapTrap::attack(const std::string& target)
{
	if ((this->HitPoints > 0) || (this->EnergyPoints > 0))
	{
		this->EnergyPoints--;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	// if amount would take the Hitpoints down zero (impossi) bcz of uint32 
	this->HitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->HitPoints > 0) || (this->EnergyPoints > 0)) // if 
	{
		this->EnergyPoints--;
		this->HitPoints += amount;
	}
}
