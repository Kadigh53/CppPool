/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:59:17 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/01 12:46:34 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

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

Point& Point::operator=(const Point& other)
{
	if (this != &other)
	{
		this->x = other.x;
		this->y = other.y;
	}
	return *this;
}

Point Point::operator+(const Point& other) const
{
	Point result;

	result.x = this->x + other.x;
	result.y = this->y + other.y;
	return result;
}
Point Point::operator-(const Point& other) const
{
	Point result;

	result.x = this->x - other.x;
	result.y = this->y - other.y;
	return result;
}
Fixed Point::operator*(const Point& other) const
{
	Fixed result;

	result = (this->x * other.y) - (this->y * other.x);
	return result;
}

Point::~Point()
{}
