/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 07:46:22 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/25 21:49:53 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::Bs_and_insertion()
{
	
}

void PmergeMe::mergerSortAlgo()
{

	std::vector<std::pair<int, int> > pairs;

	int k  = -1;
	if (container.size() % 2 != 0)
	{
		k  = container.back();
		this->container.pop_back();
	}

	for (size_t i = 1; i < container.size(); i+=2)
		if (container[i - 1] < container[i])
			std::swap(container[i], container[i - 1]);

	for (size_t i = 0; i < container.size(); i+=2)
		pairs.push_back(std::make_pair(container[i], container[i + 1]));

	std::sort(pairs.begin(), pairs.end());

	// for (size_t i = 0; i < pairs.size(); i++)
	// {
	// 	std::cout << pairs[i].first << " " << pairs[i].second << std::endl;
	// }
	// std::cout << k << std::endl;

	container.erase(container.begin(), container.end());
	container.push_back(pairs[0].second);
	for (int i = 0; i < pairs.size(); i++)
		container.push_back(pairs[i].first);
	

	Bs_and_insertion();	
}

int main(int ac , char **av)
{
	PmergeMe pm;
	pm.mergerSortAlgo();
	// if (ac < 2)
	// 	return(print("Usage: ./PmergeMe n1 n2 n3 ..."), 1);
	
	// for (int i = 1; i < ac; i++)
	// {
	// 	int k = std::atoi(av[i]);
	// 	if (!k)
	// 		return(print("Error: Invalid input"), 1);
	// 	else
	// 		pm.getVect().push_back(k);
	// }

}