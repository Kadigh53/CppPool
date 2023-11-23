/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:39:10 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/22 14:46:38 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>

class Fixed
{
private :
	int nbr;
	const static int Fraction_Bits = 8;
public :
	Fixed( void );
	Fixed( const int n);
	Fixed( const float f);
	Fixed( const Fixed& other );
	Fixed& operator=( const Fixed &other );

	// comparaison operators
	bool operator>( const Fixed &other );
	bool operator>=( const Fixed &other );
	bool operator<=( const Fixed &other );
	bool operator<( const Fixed &other );
	bool operator==( const Fixed &other );
	bool operator!=( const Fixed &other );

	// arithmetic operators 
	Fixed operator+( const Fixed &other );
	Fixed operator-( const Fixed &other );
	Fixed operator*( const Fixed &other );
	Fixed operator/( const Fixed &other );

	Fixed& operator++( void );
	Fixed& operator--( void );
	Fixed operator++( int );
	Fixed operator--( int );

	static Fixed& min(Fixed& f1,Fixed& f2);
	static Fixed& max(Fixed& f1,Fixed& f2);
	const static Fixed& min(const Fixed& f1, const Fixed& f2);
	const static Fixed& max(const Fixed& f1, const Fixed& f2);
	~Fixed();

	float toFloat( void ) const;
	int toInt( void ) const;

	friend std::ostream& operator<<(std::ostream &out, const Fixed &fp);
};

#endif