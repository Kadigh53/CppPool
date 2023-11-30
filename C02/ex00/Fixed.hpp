/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:38:51 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/30 09:16:30 by aaoutem-         ###   ########.fr       */
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
	Fixed();
	Fixed(const Fixed &other);
	Fixed& operator=(const Fixed &other);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
#endif