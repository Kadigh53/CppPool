/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:28:02 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/07 03:01:06 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

#define SPEAKER 0

class AMateria
{
protected:
	std::string type_;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria( const AMateria& other );
	AMateria& operator=( const AMateria& other );
	~AMateria(); //could be virtual ??

	std::string const & getType() const; //Returns the materia type.0.2
	virtual void use(ICharacter& target);
	virtual AMateria* clone() const = 0;
};

#endif