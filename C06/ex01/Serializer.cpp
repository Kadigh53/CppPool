/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:05:03 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/10 09:14:35 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serialize::Serialize()
{}

Serialize::Serialize(const Serialize& other)
{}
uintptr_t Serialize::serialize(Data* ptr)
{}
Data* Serialize::deserialize(uintptr_t raw)
{}
Serialize& Serialize::operator=(const Serialize& other)
{}

Serialize::~Serialize(){}