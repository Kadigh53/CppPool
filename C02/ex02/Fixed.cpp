/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:17:04 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/23 11:39:06 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream &out, const Fixed &fp)
{
	out << fp.toFloat();
	return out;
}

Fixed::Fixed( void ) : nbr(0){}

Fixed::Fixed( const int n ) : nbr(n << Fraction_Bits){}

Fixed::Fixed( const float f ) : nbr((int)roundf(f * (1 << Fraction_Bits))){}

Fixed::Fixed( const Fixed& other )
{
	if (this != &other)
		nbr = other.nbr;
}

Fixed& Fixed::operator=( const Fixed &other)
{
	if (this != &other)
		nbr = other.nbr;
	return (*this);
}

bool Fixed::operator>( const Fixed &other )
{
	return (this->nbr > other.nbr);
}

bool Fixed::operator>=( const Fixed &other )
{
	return (this->nbr >= other.nbr);
}

bool Fixed::operator<=( const Fixed &other )
{
	return (this->nbr <= other.nbr);
}

bool Fixed::operator<( const Fixed &other )
{
	return (this->nbr < other.nbr);
}

bool Fixed::operator==( const Fixed &other )
{
	return (this->nbr == other.nbr);
}

bool Fixed::operator!=( const Fixed &other )
{
	return (this->nbr != other.nbr);
}

Fixed Fixed::operator+( const Fixed &other ) const
{
	Fixed result;

	result.nbr = this->nbr + other.nbr;
	return (result);
}

Fixed Fixed::operator-( const Fixed &other ) const
{
	Fixed result;
	result.nbr = this->nbr - other.nbr;
	return (result);
}

Fixed Fixed::operator*( const Fixed &other ) const
{
	float f;
	Fixed result;
	f = this->toFloat() * other.toFloat();
	result.nbr = (int)roundf(f * (1 << Fraction_Bits));
	return (result);
}

Fixed Fixed::operator/( const Fixed &other ) const
{
	Fixed result;
	float f;

	f = this->toFloat() / other.toFloat();
	result.nbr = (int)roundf(f * (1 << Fraction_Bits));
	return (result);
}

Fixed& Fixed::operator++( void )
{
	++this->nbr;
	return *this;
}

Fixed& Fixed::operator--( void )
{
	--this->nbr;
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed tmp;

	tmp = *this;
	++this->nbr;
	return tmp;
}

Fixed Fixed::operator--( int )
{
	Fixed tmp;

	tmp = *this;
	--this->nbr;
	return tmp;
}

Fixed::~Fixed(){}

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

Fixed& Fixed::min(Fixed& fp1,Fixed& fp2)
{
	return ((fp1.nbr < fp2.nbr) ? fp1 : fp2);
}

Fixed& Fixed::max(Fixed& fp1,Fixed& fp2)
{
	return ((fp1.nbr > fp2.nbr) ? fp1 : fp2);
}

const Fixed& Fixed::min(const Fixed& fp1, const Fixed& fp2)
{
	return ((fp1.nbr < fp2.nbr) ? fp1 : fp2);
}

const Fixed& Fixed::max(const Fixed& fp1, const Fixed& fp2)
{
	return ((fp1.nbr > fp2.nbr) ? fp1 : fp2);
}

