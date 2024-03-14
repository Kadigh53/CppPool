/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:16:46 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/14 08:10:57 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate( int ABCindex )
{
	switch (ABCindex)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default :
		return NULL;
	};
}
void	identify( Base* p )
{
	if (!p)
		std::cout << "It's a Null \n";
	else if (dynamic_cast<A *>(p))
		std::cout << "the actual type of the Base pointer A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "the actual type of the Base pointer B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "the actual type of the Base pointer C\n";
	else
		std::cout << "No derived class Detected\n";
}
void	identify(Base& p)
{	
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "the actual type of the  base reference is A\n";
	}catch (std::bad_cast &e){}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "the actual type of the  base reference is B\n";
	}catch (std::bad_cast &e){}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "the actual type of the  base reference is C\n";
	}catch (std::bad_cast &e){}
}
int main()
{
	srand(time(0));
	int i = rand() % 3;
	int j = rand() % 3;
	int k = rand() % 3;

	Base * ptr = generate(i);
	Base * ptr0 = generate(j);
	Base * ptr1 = generate(k);
	identify(ptr);
	identify(ptr0);
	identify(ptr1);
	std::cout << "-------------------\n";
	identify(*ptr);
	identify(*ptr0);
	identify(*ptr1);
	
	delete ptr;
	delete ptr0;
	delete ptr1;
}
