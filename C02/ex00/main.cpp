/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:43:11 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/21 03:43:20 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private :
	int nbr;
	const static int Fraction_Bits = 8;
public :
	Fixed();									//default constructor
	Fixed(const Fixed &other);			//copy constructor
	Fixed& operator=(const Fixed &other); // copy assignement operator
	~Fixed();									// deconstructor

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

Fixed::Fixed( void ) : nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &other)
{
	//copy constructor
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		this->nbr = other.nbr;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	// here the copy assignent operator 
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->nbr = other.nbr;
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nbr);
}

void	Fixed::setRawBits( int const raw )
{
	
}

int	main()
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}