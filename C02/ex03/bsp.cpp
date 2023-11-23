/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:59:03 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/23 11:45:13 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed t1;
	Fixed t2;
	Fixed t3;

	t1 = (point - b)*(c - b);
	t2 = (point - c)*(a - c);
	t3 = (point - a)*(b - a);
	if ((t1 > 0 && t2 > 0 && t3 > 0)
		|| (t1 < 0 && t2 < 0 && t3 < 0))
		return true;
	return false;
}
