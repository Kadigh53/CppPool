/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 06:35:20 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/24 12:15:58 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	name = "bihi";
}

Zombie::Zombie( std::string zombie_name )
{
	// std::cout << "a zombie named " << zombie_name << " in construction\n..." << std::endl;
	name = zombie_name;
}

Zombie::~Zombie( void )
{
	std::cout << name << " funeral" << std::endl; 
}

void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
