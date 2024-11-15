/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:04:39 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/11/15 17:00:08 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Array
{
private :
public :
	Array();
	Array(const Array& other);
	Array& operator=(const Array& other);
	~Array();
};

#endif
