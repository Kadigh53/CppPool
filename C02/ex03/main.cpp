/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 06:43:10 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/12/01 12:52:06 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point a(0.0f, 0.0f);
	Point b(2.0f, 0.0f);
	Point c(0.0f, 2.0f);
	Point point(0.5f, 0.5f);

	bool result = bsp(a, b, c, point);
	if (result)
		std::cout << "point inside triangle" << std::endl;
	else
		std::cout << "point outside triangle" << std::endl;
}
