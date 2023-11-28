/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:41:01 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/28 10:42:09 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

# include <iostream>

class Harl
{
private :
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public :
	void complain( std::string level );
};

#endif