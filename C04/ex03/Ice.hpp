/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:18:15 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/07 02:47:51 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public :
	Ice();
	Ice( const Ice& other );
	Ice& operator=( const Ice& other );
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif