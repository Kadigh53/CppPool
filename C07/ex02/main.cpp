/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:06:18 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/16 02:56:24 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Array.hpp"

#include <iostream>
#include <strings.h>
#include <string.h>
#include <exception>
#

template <typename T>
class Array
{
private :
    T *ArrayContainer;
	size_t len;
public :

	class OutOfange : public std::exception
	{
	public :
		const char* what() const _NOEXCEPT
		{
			return "index Out of Range";
		}
	};
	Array() : len(0)
    {
		ArrayContainer = 0;
	}
	Array(int n) : len(n)
	{
		ArrayContainer = new T[n];
		bzero(ArrayContainer, len * sizeof(T));
	}
	Array(const Array& other)
	{
		if (this != &other)
		{
			this->ArrayContainer = new T[other.getlen()];
			void	*tmp = other.getArray();
			memcpy(this->ArrayContainer, tmp, sizeof(tmp));
			this->len = other.getlen();
		}
	}
	Array& operator=(const Array& other)
	{
		if (this != &other)
		{
			delete [] this->Array;
			this->ArrayContainer = new T[other.getlen()];
			void	*tmp = other.getArray();
			memccpy(this->ArrayContainer, tmp, sizeof(tmp));
			this->len = other.getlen();
		}
	}
	T& operator[](size_t idx)
	{
		if (idx < 0 || idx >= len)
			throw OutOfange();
		return (ArrayContainer[idx]);
	}

	size_t getlen( void ) const
	{
		return (len);
	}

	T* getArray( void ) const
	{
		return (ArrayContainer);
	}

	~Array()
    {
		delete [] ArrayContainer;
	}
};

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
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
    // //SCOPE
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
    delete [] mirror;//
    return 0;
}
