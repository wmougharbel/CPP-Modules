/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:58:45 by wmoughar          #+#    #+#             */
/*   Updated: 2023/09/12 10:02:26 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

bool	isAlphabetical(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (!isalpha(str[i]))
			return (false);
	}
	return (true);
}

bool	isNumeric(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

void	exitProgram(std::string message)
{
	std::cout << message << std::endl;
	exit(1);
}