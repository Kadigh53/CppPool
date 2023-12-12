/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:18:10 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/07 02:20:49 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public :
	Cure();
	Cure( const Cure& other );
	Cure& operator=( const Cure& other );
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif