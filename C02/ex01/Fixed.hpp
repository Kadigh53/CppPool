/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:42:04 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/30 10:48:26 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private :
	int nbr;
	const static int Fraction_Bits;
public :
	Fixed( void );
	Fixed( const int n);
	Fixed( const float f);
	Fixed( const Fixed& other );
	Fixed& operator=( const Fixed &other);
	~Fixed();

	float toFloat( void ) const;
	int toInt( void ) const;

};

std::ostream& operator<<(std::ostream &out, const Fixed &fp);

#endif