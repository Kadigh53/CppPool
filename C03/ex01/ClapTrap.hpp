/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:10:48 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/26 10:26:03 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class  ClapTrap
{
protected :
	std::string		name;
	unsigned int	HitPoints;
	unsigned int	EnergyPoints;
	unsigned int	AttackDamage;
public:
	ClapTrap( void );
	ClapTrap(std::string name);
	ClapTrap( const ClapTrap& other );
	~ClapTrap();


	std::string get_name( void );
	void set_name(std::string name_);

	void set_HitPoints(unsigned int HitPoints_);
	void set_EnergyPoints(unsigned int EnergyPoints_);
	void set_AttackDamage(unsigned int AttackDamage_);

	unsigned int  get_HitPoints( void );
	unsigned int  get_EnergyPoints( void );
	unsigned int  get_AttackDamage( void );

	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif