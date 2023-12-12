/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:29:50 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/09 08:45:05 by aaoutem-         ###   ########.fr       */
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

	virtual void makeSound() const = 0; 

	std::string getType() const;
	void setType(std::string typeToSet);

	virtual ~Animal();
};


#endif