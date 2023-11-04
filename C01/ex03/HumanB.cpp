/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:51:57 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/31 18:36:03 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string HumaneName)
{
	_name = HumaneName;
}

void	HumanB::setWeapon(Weapon &HumanWpn)
{
	_wpn = &HumanWpn;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _wpn->getType() << std::endl; 
}
