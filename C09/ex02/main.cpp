/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 07:46:22 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/11/20 12:24:11 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac , char **av)
{
	PmergeMe pm;
	
	pm.parseInput(ac, av);
	pm.VectMergerSortAlgo();
	pm.DqMergerSortAlgo();
}
