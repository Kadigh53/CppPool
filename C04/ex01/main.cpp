/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:30:50 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/11 18:12:41 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main ()
{
	Animal *Cat0 =  new Cat();
	Animal *Dog0 =  new Dog();

	const Animal* zoo[2] = {Cat0, Dog0};

	Dog basic;
	{
	Dog tmp = basic;
	}

	for (int i = 0;i < 2; i++)
	{
		std::cout << std::endl;
		std::cout << zoo[i]->getType() << std::endl;
		zoo[i]->makeSound();
	}
	std::cout << std::endl;

	for (int i = 0; i < 2; i++)
		delete zoo[i];

	return 0;
}
