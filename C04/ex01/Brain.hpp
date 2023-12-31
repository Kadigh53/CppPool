/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:22:06 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/09 03:00:44 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define NBR_ofIDeas 100

class Brain
{
private :
	std::string Ideas[NBR_ofIDeas];
public :

	Brain();
	Brain( const Brain& other );
	Brain& operator=( const Brain& other );
	~Brain();

	void setIdea(int idx, std::string idea);
	std::string getIdea(int idx);
};

#endif