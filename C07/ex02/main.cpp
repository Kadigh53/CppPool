/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:06:18 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/11/16 10:59:02 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 69
void a()
{
	system("leaks main");
}
int main(int, char**)
{
	atexit(a);
    Array<int>numbers(MAX_VAL);

    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = i;
        numbers[i] = value;
        mirror[i] = value;
    }
	for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
