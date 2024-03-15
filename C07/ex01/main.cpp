/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 23:08:56 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/15 01:54:06 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <iostream>

template<typename type>
void	iter(type* Array, size_t len, void (* function)(type&))
{
	for (int i = 0; i < len; i++)
		function(Array[i]);
}
void f(int& k)
{
	k = (k*k);
    
}
void g(float& k)
{
	k = (k*k);
    
}

int main()
{
	int Array[3] = {1,2,4};
	iter(Array, 3, f);
    for (size_t i = 0; i < 3; i++)
    {
        std::cout << Array[i]<< ", ";
    }
    std::cout <<"\n------------\n";
 
    float Array1[4] = {1.1, 2.2, 3.3, 4.4};
	iter(Array1, 4, g);
    for (size_t i = 0; i < 4; i++)
    {
        std::cout << Array1[i]<< ", ";
    }
    std::cout <<"\n";
}