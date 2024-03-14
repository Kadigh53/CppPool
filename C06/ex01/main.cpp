/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 03:54:26 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/13 08:06:49 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Data *ptr = new Data();
    uintptr_t raw = Serializer::serialize(ptr);
    std::cout << raw << std::endl;
    Data * ptr2 = Serializer::deserialize(raw);
    std::cout << ptr2->data << std::endl;
    
}