/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:42:07 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/22 13:02:16 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	Fixed& operator=( const Fixed &other);
	~Fixed();

	float toFloat( void ) const;
	int toInt( void ) const;

	// 	An overload of the insertion («) operator that inserts a floating-point representation
	// of the fixed-point number into the output stream object passed as parameter.
	friend std::ostream& operator<<(std::ostream &out, const Fixed &fp);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fp)
{
	out << fp.toFloat();
	return out;
}

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

int main()
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
	
}
