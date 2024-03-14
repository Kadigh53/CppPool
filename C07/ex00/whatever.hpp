/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:57:20 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/14 21:56:17 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename Type>
void swap(Type& a, Type& b)
{
	Type tmp = a;
	a = b;
	b = tmp;
}

template <typename Type>
Type    min(Type& a, Type& b)
{
	if (a < b)
		return (a);
	return (b);
}
template <typename Type>
Type    max(Type& a, Type& b)
{
	if (a < b)
		return (a);
	return (b);
}

#endif
