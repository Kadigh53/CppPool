/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:39:43 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/07 03:58:17 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{}
Character::Character( std::string name_ )
{
    
}
Character::Character( const Character& other )
{}
Character& Character::operator=( const Character& other )
{}

std::string const & Character::getName() const
{
    return (this->name);
}
void Character::equip(AMateria* m){}
void Character::unequip(int idx){}
void Character::use(int idx, ICharacter& target){}

Character::~Character(){}