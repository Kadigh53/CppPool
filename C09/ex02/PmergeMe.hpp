/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 07:10:32 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/25 22:02:12 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <stdlib.h>

typedef std::vector<int> Vect;

class PmergeMe
{
private :
	Vect	container;
public :
	PmergeMe();
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);

	Vect& getVect();

	void mergerSortAlgo();
	void Bs_and_insertion(int x);

	~PmergeMe();
};

#endif
