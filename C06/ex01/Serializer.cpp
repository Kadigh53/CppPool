/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:05:03 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/13 08:09:57 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer()
{}

// Serializer::Serializer(const Serializer& other)
// {}
// Serializer& Serializer::operator=(const Serializer& other)
// {}
uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t data = reinterpret_cast<uintptr_t>(ptr);
    return data;
}
Data* Serializer::deserialize(uintptr_t raw)
{
    Data *ptr  = reinterpret_cast<Data *>(raw);
    return (ptr);
}

Serializer::~Serializer(){}