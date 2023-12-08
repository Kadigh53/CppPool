/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 08:38:54 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/08 04:10:35 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main() 
{
    ClapTrap claptrap("CLP-TP0");

    claptrap.attack("Enemy1");

    claptrap.takeDamage(5);

    claptrap.beRepaired(3);

    claptrap.takeDamage(15);
    claptrap.attack("Enemy2");
    claptrap.beRepaired(2);

    return 0;
}
