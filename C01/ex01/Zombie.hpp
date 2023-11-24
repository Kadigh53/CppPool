/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:55:33 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/24 13:35:46 by aaoutem-         ###   ########.fr       */
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
    Zombie();
	Zombie ( std::string zombie_name );
	void	announce( void );
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif