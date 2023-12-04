/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertUtils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:51:00 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/02 18:57:06 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convertUtils.hpp"

bool	isChar(const std::string &argument)
{
	if (argument.length() > 1)
		return (false);
	if (!isprint(argument[0]) || isdigit(argument[0]))
		return (false);
	return (true);
}

bool	isInteger(const std::string &argument)
{
	unsigned int	i = 0;
	if (argument[0] == '+' || argument[0] == '-')
		i++;
	for (unsigned int j = i; j < argument.length(); j++)
		if (!isdigit(argument[j]))
			return (false);
	long	num = std::atol(argument.c_str());
	if (num > 2147483647 || num < -2147483648)
		return (false);
	return (true);
}

bool	isFloat(const std::string &argument)
{
	unsigned int	start = 0;
	int	fCount = 0;
	int	dot = 0;

	if (argument.length() < 3 || argument[argument.length() - 1] != 'f')
		return (false);
	if (argument[0] == '-' || argument[0] == '+')
		start++;
	for (unsigned int i = start; i < argument.length(); i++)
	{
		if (argument[i] == '.')
			dot++;
		else if (argument[i] == 'f')
			fCount++;
		else if (!isdigit(argument[i]))
			return (false);
	}
	if (dot != 1 || fCount != 1)
		return (false);
	return (true);
}

bool	isDouble(const std::string &argument)
{
	unsigned int	start = 0;
	int	dot = 0;

	if (argument.length() < 2)
		return (false);
	if (argument[0] == '-' || argument[0] == '+')
		start++;
	for (unsigned int i = start; i < argument.length(); i++)
	{
		if (argument[i] == '.')
			dot++;
		else if (!isdigit(argument[i]))
			return (false);
	}
	if (dot != 1)
		return (false);
	return (true);
}

bool	isPseudoLiteral(const std::string &argument)
{
	std::string	pseudoLiterals[6] = {"inf", "-inf", "inff", "-inff", "nan", "nanf"};

	for (int i = 0; i < 6; i++)
	{
		if (argument == pseudoLiterals[i])
			return (true);
	}
	return (false);
}

int	checkVariableType(const std::string &argument)
{
	if (isChar(argument))
		return (1);
	if (isInteger(argument))
		return (2);
	if (isFloat(argument))
		return (3);
	if (isDouble(argument))
		return (4);
	if (isPseudoLiteral(argument))
		return (5);
	return (0);
}
