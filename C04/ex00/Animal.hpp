/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:14:20 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/05 17:52:41 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected :
	std::string type;
public :
	Animal();
	Animal(std::string type_);
	Animal( const Animal& other );
	Animal& operator=( const Animal& other );

	virtual void makeSound() const;
	// void makeSound() const;

	std::string getType() const;
	void setType(std::string typeToSet);
	virtual ~Animal(); // but whyyy a virtual destructor 
};


#endif