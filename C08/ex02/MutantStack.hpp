/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 00:46:18 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/21 05:54:10 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public :
	MutantStack() : std::stack<T, Container>()
	{}
	MutantStack(const MutantStack& other) : std::stack<T>(other)
	{
		
	}
	MutantStack& operator=(const MutantStack& other)
	{
		return std::stack::operator=(other);
	}
	typedef typename Container::iterator iterator;
	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}

	~MutantStack()
	{}
};

#endif
