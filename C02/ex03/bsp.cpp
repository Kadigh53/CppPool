/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:59:03 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/01 12:04:55 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed cross1;
	Fixed cross2;
	Fixed cross3;

	cross1 = (point - b)*(c - b);
	cross2 = (point - c)*(a - c);
	cross3 = (point - a)*(b - a);
	if ((cross1 > 0 && cross2 > 0 && cross3 > 0)
		|| (cross1 < 0 && cross2 < 0 && cross3 < 0))
		return true;
	return false;
}
