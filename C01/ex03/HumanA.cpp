/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:44:25 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/31 18:24:17 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string HumaneName, Weapon &HumanWpn)
{
	_name = HumaneName;
	_wpn = HumanWpn;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _wpn.getType() << std::endl; 
}
