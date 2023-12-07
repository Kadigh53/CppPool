/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:39:43 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/07 06:37:51 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Character.hpp"

Character::Character()
{
	inventory_[0] = NULL;
	inventory_[1] = NULL;
	inventory_[2] = NULL;
	inventory_[3] = NULL;
	tmp = NULL;
}
Character::Character( std::string name_ )
	: name(name_)
{
	inventory_[0] = NULL;
	inventory_[1] = NULL;
	inventory_[2] = NULL;
	inventory_[3] = NULL;
	tmp = NULL;
}

Character::Character( const Character& other )
{
	this->name = other.name;
	if (other.tmp)
		this->tmp = other.tmp->clone();
	for (int i = 0; i < 4; i++)
		this->inventory_[i] = other.inventory_[i]->clone();
}

Character& Character::operator=( const Character& other )
{
	if (this != &other)
	{
		this->name = other.name;
		if (other.tmp)
		{
			delete tmp;
			this->tmp = other.tmp->clone();
		}
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory_[i])
				delete inventory_[i];
		}
		for (int i = 0; i < 4; i++)
			this->inventory_[i] = other.inventory_[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}
void Character::equip(AMateria* m)
{
	int i = -1;
	while (++i < 4)
	{
		if (!this->inventory_[i])
		{
			this->inventory_[i] = m;
			break;
		}
	}
	return ;
}

void Character::unequip(int idx)
{

	if (this->inventory_[idx])
	{
		this->tmp = this->inventory_[idx];
		this->inventory_[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (inventory_[idx])
			inventory_[idx]->use(target);
		else
			std::cout << "the AMateria doesn't exist" << std::endl;
	}
	else 
		std::cout << "the index is out of range " << std::endl;
	return ;
}

Character::~Character(){}