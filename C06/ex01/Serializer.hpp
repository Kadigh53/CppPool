/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:04:28 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/10 09:13:15 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

class Data;

typedef unsigned int uintptr_t;

class Serialize
{
private :
public :
	Serialize();
	Serialize(const Serialize& other);
	Serialize& operator=(const Serialize& other);
	
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
	
	~Serialize();
};

#endif
