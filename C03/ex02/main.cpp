/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:10:23 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/27 14:17:48 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	ClapTrap clap1("Clap1");
	clap1.attack("Target1");
	clap1.attack("Target1");
	clap1.attack("Target1");
	clap1.attack("Target1");
	clap1.takeDamage(9);
	clap1.beRepaired(10);

	ClapTrap clap2("Clap2");
	ClapTrap clap3 = clap2;
	clap3.attack("clap1");

	ScavTrap scav1("Scav1");
	scav1.attack("Target2");
	scav1.takeDamage(5);
	scav1.beRepaired(10);
	scav1.guardGate();

	ScavTrap scav2 = scav1;
	ScavTrap scav3("Scav3");

	FragTrap frag1("Frag1");
	frag1.attack("Target3");
	frag1.takeDamage(2);
	frag1.highFivesGuys();
	FragTrap frag2 = frag1;
	FragTrap frag3("Frag3");

	return 0;
}


// int main()
// {
//     FragTrap frag1("Frag1");
//     frag1.attack("Target1");
//     frag1.takeDamage(20);
//     frag1.beRepaired(10);
//     frag1.highFivesGuys();

//     FragTrap frag2 = frag1; 
//     frag2.attack("Target2");

//     return 0;
// }
