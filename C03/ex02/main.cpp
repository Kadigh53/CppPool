/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:10:23 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/08 19:14:24 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	FragTrap frag1("Frag1");
	frag1.attack("Target3");
	frag1.takeDamage(2);
	frag1.beRepaired(10);
	frag1.highFivesGuys();

	return 0;
}
