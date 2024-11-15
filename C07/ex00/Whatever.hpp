/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:57:20 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/11/15 16:32:17 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T& min(const T& a, const T& b)
{
	
	// std::cout << std::endl;
	// std::cout << a<< std::endl;
	// std::cout << b<< std::endl;
	return (a<b?a:b);
}

template <typename T>
const T& max(const T& a, const T& b)
{
	// std::cout << std::endl;
	// std::cout << a<< std::endl;
	// std::cout << b<< std::endl;
	return (a<=b?b:a);
}

#endif