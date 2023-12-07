/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 02:16:35 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/06 02:16:36 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public :
	Cat();
	Cat( std::string type_ );
	Cat(const Cat& other );
	Cat& operator=( const Cat& other );
	
	void makeSound() const;

	~Cat();
};


#endif