/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:06:48 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/09 02:38:02 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void	genericCode(const Animal *animal)
{
	std::cout << animal->getType() << " " << std::endl;
	animal->makeSound();
	std::cout << std::endl;
}

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	genericCode(meta);
	genericCode(j);
	genericCode(i);

	delete meta;
	delete i;
	delete j;

	return 0;
}
