/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 07:46:22 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/26 17:15:24 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::Bs_and_insertion(int x)
{
	int i = 0;
	int j = container.size() - 1;
	int m = 0;

	while (i <= j)
	{
		m = (i + j) / 2;
		if (container[m] < x)
			i = m + 1;
		else
			j = m - 1;
	}
	container.insert(container.begin() + i, x);
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

	container.erase(container.begin(), container.end());
	container.push_back(pairs[0].second);
	for (int i = 0; i < pairs.size(); i++)
		container.push_back(pairs[i].first);
	pairs.erase(pairs.begin());

	for (size_t i = 0; i < pairs.size(); i++)
		Bs_and_insertion(pairs[i].second);
	if (k > 0)
		Bs_and_insertion(k);

	for (size_t i = 0; i < container.size(); i++)
		std::cout << container[i] << ",";//std::endl;
	
}

int main(int ac , char **av)
{
	// std::vector<int> vect;
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