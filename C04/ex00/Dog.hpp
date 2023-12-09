/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:16:09 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/09 00:20:59 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public :
	Dog();
	Dog( std::string type_ );
	Dog( const Dog& other );
	Dog& operator=( const Dog& other );
	~Dog();

	void makeSound() const;
};


#endif