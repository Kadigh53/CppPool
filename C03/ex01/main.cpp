/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:10:45 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/08 04:22:22 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap claptrap("CL4P-TP");
	ClapTrap &cpR = claptrap;
	ClapTrap claptrap2(claptrap);

	claptrap.attack("Enemy1");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);

	claptrap.takeDamage(15);
	claptrap.attack("Enemy2");
	claptrap.beRepaired(2);

	std::cout << std::endl;
	claptrap2.attack("Enemy0");
   
	ScavTrap scavtrap("SCV-TP");


	cpR = scavtrap;
	std::cout << std::endl;
	cpR.attack("MIMI");
	scavtrap.attack("ZgopO");
	scavtrap.takeDamage(10);
	scavtrap.beRepaired(5);

	scavtrap.guardGate();

	return 0;
}
