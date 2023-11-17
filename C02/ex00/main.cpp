/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/11/07 18:15:55 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/09 23:06:22 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{}
=======
/*   Created: 2023/11/12 16:09:54 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/15 22:39:56 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class FixedPoint
{
private :
	int w;
	const static int b; 
public :
	FixedPoint();
	~FixedPoint();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

FixedPoint::FixedPoint( void )
{
}

FixedPoint::~FixedPoint()
{}

int		FixedPoint::getRawBits( void ) const
{}
void	FixedPoint::setRawBits( int const raw )
{}

int	main()
{
	
}
>>>>>>> 608aeff5c338b7ca9d2818881267feb57df56e83
