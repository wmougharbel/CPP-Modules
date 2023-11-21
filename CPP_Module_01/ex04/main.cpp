/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:12:50 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/01 12:31:31 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

bool	replaceStringsInFile(std::string fileName, std::string s1, std::string s2)
{
	size_t			index;
	std::string		line;
	std::ifstream	input;
	std::ofstream	output;

	input.open(fileName);
	if (s1.empty())
	{
		std::cout << "First string cannot be empty!" << std::endl;
		return (false);
	}
	if (!input.is_open())
	{
		std::cout << "Error opening file " << fileName << std::endl;
		return (false);
	}
	output.open(fileName + ".replace");
	if (!output.is_open())
	{
		std::cout << "Error creating file " << fileName + ".replace" << std::endl;
		return (false);
	}
	while (std::getline(input, line))
	{
		if (s1 != s2)
		{
			index = line.find(s1);;
			while (index != std::string::npos)
			{
				line.erase(index, s1.length());
				line.insert(index, s2);
				index = line.find(s1, index + s2.length());
			}
		}
		output << line << std::endl;
	}
	input.close();
	output.close();
	return (true);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Expected 4 arguments" << std::endl;
		return (1);
	}
	else
		if (!replaceStringsInFile(argv[1], argv[2], argv[3]))
			return (1);
	return (0);
}
