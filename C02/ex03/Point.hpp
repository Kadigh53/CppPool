/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:59:19 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/01 12:02:22 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private :
	Fixed x;
	Fixed y;
public :
	Point ( void );
	Point (float x_, float y_);
	Point (const Point &other);
	Point& operator=(const Point& other);


	Point operator+(const Point& other) const;
	Point operator-(const Point& other) const;
	Fixed operator*(const Point& other) const;

	// Fixed getxval( void );
	// Fixed getyval( void );
	~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif