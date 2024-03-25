/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 07:10:58 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/25 20:32:35 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    container.push_back(5);
    container.push_back(2);
    container.push_back(3);
    container.push_back(1);
    container.push_back(4);
    container.push_back(7);
    container.push_back(6);
    
}
PmergeMe::PmergeMe(const PmergeMe& other)
{}
PmergeMe::~PmergeMe()
{}

Vect& PmergeMe::getVect()
{
    return (this->container);
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{}
