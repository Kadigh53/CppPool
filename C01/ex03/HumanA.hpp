/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:44:53 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/31 18:24:28 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMAN_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private :
	std::string	_name;
	Weapon		&_wpn;
public :
	HumanA(std::string HumaneName, Weapon &HumanWpn);
	void attack();
};

#endif