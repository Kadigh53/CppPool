/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:51:20 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/11 16:16:24 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public :
	WrongCat();
	WrongCat( std::string type_ );
	WrongCat(const WrongCat& other );
	WrongCat& operator=( const WrongCat& other );
	
	void makeSound() const;

	~WrongCat();
};

#endif
