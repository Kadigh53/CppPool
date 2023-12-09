/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:30:50 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/09 03:53:08 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void lk ()
{system("leaks zoo");}

int main ()
{
	atexit (lk);
	Cat *cat1 =  new Cat;
	cat1 = new Cat(*cat1);
	delete cat1;
	// Cat cat2(*cat1);
	// Dog dog1;
	// Dog dog2;

	// Animal* meta[4] = {&cat1,&cat2,&dog1,&dog2};
	// meta[0] = cat1;
	// meta[1] = cat2;
	// meta[2] = dog1;
	// meta[3] = dog2;
}
