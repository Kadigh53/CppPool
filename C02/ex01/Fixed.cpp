/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:42:02 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/30 10:44:18 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::Fraction_Bits = 8;

Fixed::Fixed( void ) : nbr(2688)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) : nbr(n << Fraction_Bits)
{
	// convert an int to a fixed point version 
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float f ) : nbr((int)roundf(f * (1 << Fraction_Bits)))
{
	// it converts the float to a fixedpoint version 
	// nbr =  (int)round(f * (1 << Fraction_Bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& other )
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		nbr = other.nbr;
}

Fixed& Fixed::operator=( const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		nbr = other.nbr;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat( void ) const
{
	// converts the fixed point to float
	return ((float)nbr / (1 << Fraction_Bits));
}

int		Fixed::toInt( void ) const
{
	// converts the fixed point to int
	return (nbr / (1 << Fraction_Bits));
}

std::ostream& operator<<(std::ostream &out, const Fixed &fp)
{
	out << fp.toFloat();
	return out;
}
