/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 02:16:55 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/06 21:23:55 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

// Any class with pure virtual functions should also have a virtual destructor.

int main()
{
	Cat a;
	Dog b;

	a.makeSound();
	b.makeSound();
}
