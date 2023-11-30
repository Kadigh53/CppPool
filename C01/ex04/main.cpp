/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:09:15 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/30 10:25:10 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ios>

std::string replaceString(std::string line, std::string s1, std::string s2)
{
	size_t pos = 0;
	if (s1.empty())
		return (line);
	pos = line.find(s1, pos);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos = line.find(s1, pos);
	}
	return (line);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "invalid number of arguments";
		return 0;
	}
	std::ifstream	inf;
	std::ofstream	outf;

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string		line;

	inf.open(filename.c_str());
	if (!inf.is_open())
	{
		std::cerr << "infile failed to open " << std::endl;
		return (0);
	}
	outf.open((filename + ".replace").c_str());
	if (!outf.is_open())
	{
		std::cerr << "outfile failed to open " << std::endl;
		return (0);
	}
	while (getline(inf,line))
	{
		line = replaceString(line, s1, s2);
		outf << line << std::endl;	
	}
	inf.close();
	outf.close();
	return 0;
}
