/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:43:39 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/28 10:45:00 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

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
