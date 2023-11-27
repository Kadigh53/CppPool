/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:10:23 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/27 10:55:14 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Test 1: Creating a ClapTrap
    ClapTrap clap1("Clap1");
    // Test 2: Performing an attack with ClapTrap
    clap1.attack("Target1");
    // Test 3: Creating another ClapTrap with a specified name
    ClapTrap clap2("Clap2");
    // Test 4: Copy constructing ClapTrap
    ClapTrap clap3 = clap2;
    // Test 5: Creating a ScavTrap
    ScavTrap scav1("Scav1");
    // Test 6: Performing an attack with ScavTrap
    scav1.attack("Target2");
    // Test 7: Using ScavTrap's special capacity
    scav1.guardGate();
    // Test 8: Copy constructing ScavTrap
    ScavTrap scav2 = scav1;
    // Test 9: Creating another ScavTrap with a specified name
    ScavTrap scav3("Scav3");
    // Test 10: Creating a FragTrap
    FragTrap frag1("Frag1");
    // Test 11: Performing an attack with FragTrap
    frag1.attack("Target3");
    // Test 12: Using FragTrap's special capacity
    frag1.highFivesGuys();
    // Test 13: Copy constructing FragTrap
    FragTrap frag2 = frag1;
    // Test 14: Creating another FragTrap with a specified name
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
