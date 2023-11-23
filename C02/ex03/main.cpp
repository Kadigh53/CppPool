/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 06:43:10 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/22 15:01:16 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private :
	// Fixed const x;
	// Fixed const y;
	Fixed x;
	Fixed y;
public :
	Point ( void );
	Point (float x_, float y_);
	Point (const Point &other);
	~Point();
};

Point::Point () 
		: x(0), y(0)
{}
Point::Point (const float x_, const float y_)
		: x(Fixed(x_)), y(Fixed(y_))
{}
Point::Point (const Point &other)
{
	if (this != &other)
	{
		x = other.x;
		y = other.y;
	}
}

Point::~Point()
{}

int main()
{
	
}