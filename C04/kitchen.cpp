/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kitchen.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:03:59 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/02 16:34:04 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class animal
{
protected :
	std::string type;
public :
	animal( std::string type_) : type(type_)
	{
		std::cout << "animal const called " << std::endl;
	}
	void print_t(){
		std::cout <<  type << std::endl;
	}
};

class Dog : public animal 
{
private :
	std::string name;
public :
	Dog(std::string name_) :
		animal("Dog")
		,name(name_)
	{
		std::cout << "dog const called " << std::endl;
	}
	void print_(){
		std::cout <<  type << std::endl;
		std::cout <<  name << std::endl;	
	}
};

int main()
{
	animal dog = Dog("doberman");
	dog.print_t();
	// dog.print_();
}