/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:47:35 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/28 11:12:48 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

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

#endif