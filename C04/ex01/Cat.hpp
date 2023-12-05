/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:30:14 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/05 15:42:18 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private :
	Brain *brain;

public :
	Cat();
	Cat( std::string type_ );
	Cat(const Cat& other );
	Cat& operator=( const Cat& other );
	
	void makeSound() const;
	

	~Cat();
};


#endif