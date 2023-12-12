/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:06:48 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/11 16:25:37 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	genericCode(const Animal *animal)
{
	std::cout << animal->getType() << " " << std::endl;
	animal->makeSound();
	std::cout << std::endl;
}

void notGeneric(const WrongAnimal* wanimal)
{
	wanimal->makeSound();
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

	std::cout << std::endl;
	// const WrongAnimal* meta0 = new WrongAnimal();
	const WrongAnimal* Wcat = new WrongCat();

	// notGeneric(meta0);
	notGeneric(Wcat);

	// delete meta0;
	delete Wcat;

	return 0;
}
