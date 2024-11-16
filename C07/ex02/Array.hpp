/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:04:39 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/11/16 10:51:27 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <strings.h>
#include <ctime>
#include <exception>
	

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
		const char* what() const throw()
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
			memcpy(this->ArrayContainer, tmp,  other.getlen()*sizeof(T));
			this->len = other.getlen();
		}
	}
	Array& operator=(const Array& other)
	{
		if (this != &other)
		{
			delete [] this->ArrayContainer;
			this->ArrayContainer = new T[other.getlen()];
			void *tmp = other.getArray();
			memccpy(this->ArrayContainer, tmp, other.getlen()*sizeof(T));
			this->len = other.getlen();
		}
		return *this;
	}
	T& operator[](size_t idx)
	{
		if (idx >= len)// || idx < 0)
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

	size_t size( void ) const
	{
		return (len);
	}

	~Array()
    {
		delete [] ArrayContainer;
	}
};

#endif
