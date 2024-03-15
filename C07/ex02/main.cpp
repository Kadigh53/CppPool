/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:06:18 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/15 06:56:31 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Array.hpp"

#include <iostream>
#include <strings.h>
#include <exception>

template <typename T>
class Array
{
private :
    T *ArrayContainer;
public :

	class OutOfange : public std::exception
	{
	public :
		const char* what() const _NOEXCEPT
		{
			return "index Out of Range";
		}
	}
	Array()
    {
		ArrayContainer = 0;
	}
	Array(int n)
	{
		ArrayContainer = new T[n];
		bzero(ArrayContainer, sizeof(ArrayContainer));
	}
	Array(const Array& other)
	{
		if (this != &other)
		{
			
		}
	}
	Array& operator=(const Array& other);
	T operator[](size_t idx)
	{
		if (idx < 0 || idx >= (sizeof(ArrayContainer) / sizeof(T)))
			throw OutOfange();
		return (ArrayContainer[i]);
	}
	~Array()
    {}
};

int main()
{
	int *a =new int;
	std::cout << "a[i] : " << a << std::endl;

	// a[0]= 9;
	// a[1]= 99;
	// a[2]= 999;
	// for (int i=0; i < 3;i++)
	// 	std::cout << "a[i] : " << a[i] << std::endl;

}
