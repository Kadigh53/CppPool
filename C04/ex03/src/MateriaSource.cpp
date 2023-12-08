/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 06:43:50 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/08 00:04:04 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i =0; i < 4; i++)
		learnedMaterias[i] = NULL;
}
MateriaSource::MateriaSource( const MateriaSource& other )
{
	for (int i = 0; i < 4; i++)
	{
		if (learnedMaterias[i])
			this->learnedMaterias[i] = other.learnedMaterias[i]->clone();
		else
			this->learnedMaterias[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{}

MateriaSource& MateriaSource::operator=( const MateriaSource& other )
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (learnedMaterias[i])
				this->learnedMaterias[i] = other.learnedMaterias[i]->clone();
			else
				this->learnedMaterias[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	int i = -1;
	while (++i < 4)
	{
		if (!learnedMaterias[i])
		{
			learnedMaterias[i] = m->clone();
			break;
		}
	}
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = -1;
	while (++i < 4)
	{
		if (learnedMaterias[i] 
			&& type == learnedMaterias[i]->getType())
			return (learnedMaterias[i]->clone());
	}
	return 0;
}
