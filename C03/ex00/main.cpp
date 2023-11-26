/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 08:38:54 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/26 13:42:08 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
	ClapTrap T("bihi");

	T.attack("hmad");
	T.takeDamage(111);
	T.attack("hmad");
	T.attack("hmad");
	T.beRepaired(10);
	T.takeDamage(10);
	T.attack("hmad");
	T.beRepaired(10);
	T.attack("hmad");
}