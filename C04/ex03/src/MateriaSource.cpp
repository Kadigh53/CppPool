/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 06:43:50 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/07 09:07:25 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i =0; i < 4; i++)
		learnedMaterias[i] = NULL;
}
MateriaSource::MateriaSource( const MateriaSource& other )
{}
MateriaSource::~MateriaSource()
{}
MateriaSource& MateriaSource::operator=( const MateriaSource& other )
{}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = -1;
	while (++i < 4)
	{
		if (!learnedMaterias[i])
		{
			learnedMaterias[i] = m->clone();
			break;
		}
	}
	
}
AMateria* MateriaSource::createMateria(std::string const & type)
{}
