/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:16:04 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/05 09:54:17 by aaoutem-         ###   ########.fr       */
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