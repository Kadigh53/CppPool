/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:04:28 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/13 08:10:05 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>

class Data;

class Serializer
{
private :
	Serializer();
	// Serializer(const Serializer& other);
	// Serializer& operator=(const Serializer& other);
public :
	
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
	
	~Serializer();
};

#endif
