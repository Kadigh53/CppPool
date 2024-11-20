/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 07:10:32 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/11/20 12:20:41 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <set>
#include <stdlib.h>

typedef std::vector<int> Vect;
typedef std::vector<int>::iterator VectIt;
typedef std::deque<int> dq;
typedef std::deque<int>::iterator dqIt;

class PmergeMe
{
private :
	Vect	vectCont;
	dq		DqCont;
public :
	PmergeMe();
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);

	Vect& getVect( void );
	dq& getDq( void );

	void parseInput(int argc, char* argv[]);
	void VectMergerSortAlgo();
	void DqMergerSortAlgo();

	void VectBsinsertion(int x);
	void DqBsinsertion(int x);

	~PmergeMe();
};


#endif
