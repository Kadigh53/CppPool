/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:30:32 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/05 18:45:55 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private :
	Brain *brain;
public :
	Dog();
	Dog( const Dog& other );
	Dog( std::string type_ );
	Dog& operator=( const Dog& other );

	void makeSound() const;
	
	~Dog();
};


#endif