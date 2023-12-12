/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:51:15 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/11 15:27:29 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected :
	std::string type;
public :
	WrongAnimal();
	WrongAnimal(std::string type_);
	WrongAnimal( const WrongAnimal& other );
	WrongAnimal& operator=( const WrongAnimal& other );

	void makeSound() const;

	~WrongAnimal();
};

#endif