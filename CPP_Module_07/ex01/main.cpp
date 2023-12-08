/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:21:24 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/06 19:49:19 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	capitalize(std::string s)
{
	for (unsigned int i = 0; i < s.length(); i++)
		std::cout << static_cast<char>(std::toupper(s[i]));
	std::cout << std::endl;
}

void	deCapitalize(std::string s)
{
	for (unsigned int i = 0; i < s.length(); i++)
		std::cout << static_cast<char>(std::tolower(s[i]));
	std::cout << std::endl;	
}

bool	foundString(std::string str)
{
	if (str == "OLD")
		return (std::cout << "True" << std::endl, true);
	else
		return (std::cout << "False" << std::endl, false);
}

std::string	printString(std::string toPrint)
{
	if (toPrint.empty())
		return (NULL);
	std::cout << toPrint << std::endl;
	return (toPrint);
}

int main()
{
	std::cout << "\nCAPITALIZED STRING" << std::endl;
	std::string	lowerStringArray[6] = {"Hello", "Darkness", "My", "Old", "Friend"};
	iter(lowerStringArray, 5, capitalize);

	std::cout << "\nDECAPITALIZED STRING" << std::endl;
	std::string	upperStringArray[6] = {"HELLO", "DARKNESS", "MY", "OLD", "FRIEND"};
	iter(upperStringArray, 5, deCapitalize);

	std::cout << "\nBOOL FUNCTION TEST" << std::endl;
	iter(upperStringArray, 5, foundString);

	std::cout << "\nSTRING FUNCTION TEST" << std::endl;
	iter(lowerStringArray, 5, printString);
}
