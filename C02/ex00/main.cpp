/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
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
