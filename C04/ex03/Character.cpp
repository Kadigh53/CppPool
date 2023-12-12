/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:39:43 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/11 06:15:34 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
	: name("Anonyme")
{
	for (int i = 0; i < 4 ; i++)
			inventory_[i] = NULL;
	tmp = NULL;
	std::cout <<tmp<< std::endl;
	delete tmp;
}
Character::Character( std::string name_ )
	: name(name_)
{
	for (int i = 0; i < 4 ; i++)
			inventory_[i] = NULL;
	tmp = NULL;
}

Character::Character( const Character& other )
{
	// std::cout << other.getName() << "kimpo  :"<<std::endl;
	this->name = other.name;
	if (other.tmp)
		this->tmp = other.tmp->clone();
	else
		this->tmp = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory_[i])
			this->inventory_[i] = other.inventory_[i]->clone();
		else 
			this->inventory_[i] = NULL;
	}
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
			if (this->inventory_[i])
				delete inventory_[i];
		for (int i = 0; i < 4; i++)
			if (other.inventory_[i])
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
	if (!m)
		return ;
	int i = -1;
	while (++i < 4)
	{
		if (!this->inventory_[i])
		{
			this->inventory_[i] = m->clone();
			break;
		}
	}
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "unequip index out of range" << std::endl;
		return ;
	}
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

Character::~Character()
{
	for (int i = 0;i < 4; i++)
		delete inventory_[i];
	delete tmp;
}
