/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:09:15 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/03 22:57:06 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ios>

class Sedforloser
{
	
};

int main(int ac, char **av)
{
	// if (ac != 4)
	// 	std::cerr << "invalid number of arguments";
	size_t pos;
	std::string filename = av[1];
	std::ifstream inf;
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string line;
	inf.open(filename.c_str());
	std::ofstream outf;
	outf.open((filename + ".replace").c_str(), std::ios::app);
	while (getline(inf,line))
	{
		pos = 0;
		pos = line.find(s1, pos);
		if (pos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			outf << line << std::endl;
		}
	}
	
}
