/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kitchen.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:36:55 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/26 10:12:26 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// class Animal {
// protected :
// 	std::string name;
// 	int Weight;
// 	int age;
// public :
// 	Animal(std::string name_): name(name_)
// 	{}
// 	void eat()
// 	{
// 		std::cout << "the " << name << " is eating " << std::endl;
// 	}
// };

// class Hipo : public Animal 
// {
// 	public :
// 	Hipo(std::string name_) : Animal(name_)
// 	{}
// 	void shredding (){
// 		std::cout << "the hipo shreds a watermelon " << std::endl;
// 	}
// };

// int main()
// {
// 	Hipo h1("hipo");
	
// 	h1.eat();
// 	h1.shredding();
// }


class A 
{
private : 
	int a; 
public :
	A() : a(9)
	{}
	void geta()
	{
		std::cout << a << std::endl;
	}
};

class B :public A 
{
public :
	void ola(){
		std::cout << "olalal" << std::endl;
	}
};

int main()
{
	B bb;
	bb.geta();
}