/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 09:57:02 by aaoutem-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/10/30 09:03:34 by aaoutem-         ###   ########.fr       */
=======
/*   Updated: 2023/10/29 17:17:48 by aaoutem-         ###   ########.fr       */
>>>>>>> b3280954f7d1a36f5565ece919c1c4ae39a4e252
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
 
void	Zombie::announce( void )
{
	std::cout << name << " qalikom qwdtoha breeeeeeeeeeeeeeeeb..." << std::endl;
}

Zombie::Zombie( std::string zombie_name )
{
	name = zombie_name;
}

Zombie::Zombie( void )
{
	name = "bihi";
}

Zombie::~Zombie( void )
{
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *z;
	z = new Zombie[N];
	for (int i = 0; i < N; i++)
		z[i] = Zombie(name);
	return z;
}

int	main()
{
	Zombie *z;

	z = zombieHorde(3, "hmad");
	for (int i = 0;i < 4;i++)
	{
		z[i].announce();
	}
	delete[] z;
}
