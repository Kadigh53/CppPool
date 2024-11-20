/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 07:10:58 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/11/20 12:23:15 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}
PmergeMe::PmergeMe(const PmergeMe& other)
{ 
    this->vectCont = other.vectCont;
    this->DqCont = other.DqCont;
}
PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other)
    {
        this->vectCont = other.vectCont;
        this->DqCont = other.DqCont;
    }
    return (*this);
}
PmergeMe::~PmergeMe()
{}

Vect& PmergeMe::getVect( void )
{
    return (vectCont);
}
dq& PmergeMe::getDq( void )
{
    return (DqCont);
}

void PmergeMe::parseInput(int argc, char* argv[])
{
	if (argc < 2)
	{
		std::cerr << "Error: Please provide integers to sort" << std::endl;
		exit(1);
	}
	std::set<int> dupCheck;
	for (int i = 1; i < argc; ++i)
	{
		std::istringstream iss(argv[i]);
		int num;
		if (!(iss >> num) || num < 0) {
			std::cerr << "Error" << std::endl;
			exit(1);
		}
		if (dupCheck.insert(num).second == false) {
			std::cerr << "Error: duplicates" << std::endl;
			exit(1);
		}
		vectCont.push_back(num);
		DqCont.push_back(num);
	}
}

void PmergeMe::VectBsinsertion(int x)
{
	int i = 0;
	int j = vectCont.size() - 1;
	int m = 0;

	while (i <= j)
	{
		m = (i + j) / 2;
		if (vectCont[m] < x)
			i = m + 1;
		else
			j = m - 1;
	}
	vectCont.insert(vectCont.begin() + i, x);
}

void PmergeMe::DqBsinsertion(int x)
{
	int i = 0;
	int j = DqCont.size() - 1;
	int m = 0;

	while (i <= j)
	{
		m = (i + j) / 2;
		if (DqCont[m] < x)
			i = m + 1;
		else
			j = m - 1;
	}
	DqCont.insert(DqCont.begin() + i, x);
}

template <typename T>
void ArrayElements(std::string str, T Cont)
{
	std::cout << str << std::endl;
	for (size_t i=0; i < Cont.size(); i++)
		std::cout << Cont[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::VectMergerSortAlgo()
{
	std::vector<std::pair<int, int> > pairs;

	ArrayElements("Before: ", this->getVect());

	clock_t startvect = clock();

	int k  = -1;
	if (vectCont.size() % 2 != 0)
	{
		k  = vectCont.back();
		this->vectCont.pop_back();
	}

	for (size_t i = 1; i < vectCont.size(); i+=2)
		if (vectCont[i - 1] < vectCont[i])
			std::swap(vectCont[i], vectCont[i - 1]);

	for (size_t i = 0; i < vectCont.size(); i+=2)
		pairs.push_back(std::make_pair(vectCont[i], vectCont[i + 1]));

	std::sort(pairs.begin(), pairs.end());

	vectCont.erase(vectCont.begin(), vectCont.end());
	vectCont.push_back(pairs[0].second);
	for (size_t i = 0; i < pairs.size(); i++)
		vectCont.push_back(pairs[i].first);
	pairs.erase(pairs.begin());

	for (size_t i = 0; i < pairs.size(); i++)
		VectBsinsertion(pairs[i].second);
	if (k > 0)
		VectBsinsertion(k);

	ArrayElements("After: ", this->getVect());
	clock_t endvect = clock();
	double vectTime = static_cast<double>(endvect - startvect) / CLOCKS_PER_SEC * 1000000.0;
	std::cout << "Time to process a range of " << vectCont.size() 
                  << " elements with std::vector: " << vectTime << " us" << std::endl;
}

void PmergeMe::DqMergerSortAlgo()
{
	std::deque<std::pair<int, int> > pairs;

	clock_t startDq = clock();

	int k  = -1;
	if (DqCont.size() % 2 != 0)
	{
		k  = DqCont.back();
		this->DqCont.pop_back();
	}
	
	for (size_t i = 1; i < DqCont.size(); i+=2)
		if (DqCont[i - 1] < DqCont[i])
			std::swap(DqCont[i], DqCont[i - 1]);

	for (size_t i = 0; i < DqCont.size(); i+=2)
		pairs.push_back(std::make_pair(DqCont[i], DqCont[i + 1]));

	std::sort(pairs.begin(), pairs.end());

	DqCont.erase(DqCont.begin(), DqCont.end());
	DqCont.push_back(pairs.front().second);
	for (size_t i = 0; i < pairs.size(); i++)
		DqCont.push_back(pairs[i].first);
	pairs.erase(pairs.begin());

	for (size_t i = 0; i < pairs.size(); i++)
		DqBsinsertion(pairs[i].second);
	if (k > 0)
		DqBsinsertion(k);

	clock_t endDq = clock();
	double dqTime = static_cast<double>(endDq - startDq) / CLOCKS_PER_SEC * 1000000.0;
	std::cout << "Time to process a range of " << DqCont.size() 
                  << " elements with std::deque: " << dqTime << " us" << std::endl;
    
}
