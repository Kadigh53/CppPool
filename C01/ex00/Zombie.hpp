/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 06:20:37 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/24 12:06:46 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private :
	std::string name;
public:
	Zombie ();
	Zombie ( std::string zombie_name );
	void	announce( void );
	~Zombie();
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif