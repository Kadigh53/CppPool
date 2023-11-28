/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:51:57 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/28 11:11:44 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

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
