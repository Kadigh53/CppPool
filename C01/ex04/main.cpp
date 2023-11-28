/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:09:15 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/28 17:27:06 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ios>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "invalid number of arguments";
		return 0;
	}

	size_t pos;
	std::ifstream	inf;
	std::ofstream	outf;
	std::string		line;

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	inf.open(filename.c_str());
	if (!inf.is_open())
	{
		std::cerr << "infile failed to open " << std::endl;
		return (0);
	}
	outf.open((filename + ".replace").c_str(), std::ios::app);
	if (!outf.is_open())
	{
		std::cerr << "outfile failed to open " << std::endl;
		return (0);
	}
	while (getline(inf,line))
	{
		pos = 0;
		// if (pos)
		pos = line.find(s1, pos);
		if (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			// outf << line << std::endl;
		}
	}
	inf.close();
	outf.close();
	return 0;
}
