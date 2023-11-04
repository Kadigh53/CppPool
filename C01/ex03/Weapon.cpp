/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:43:39 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/31 18:30:11 by aaoutem-         ###   ########.fr       */
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

void	Weapon::setType(std::string str)
{
	_type = str;
}