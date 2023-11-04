/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 06:19:05 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/10/29 13:50:52 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}

Zombie*	newZombie( std::string name )
{
	Zombie *z;
	z = new Zombie(name);
	return z;
}

void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void randomChump( std::string name )
{
	Zombie z1;
	z1 = Zombie(name);
	z1.announce();
}

int main()
{
	Zombie *z0;
	z0 = newZombie("eli");
	z0->announce();
	std::cout << std::endl;
	randomChump("hmad");
	delete z0;
}
