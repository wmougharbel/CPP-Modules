/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:13:59 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/22 13:38:46 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.hpp"

bool	isOperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (true);
	return (false);
}

bool	isNumeric(std::string notation)
{
	for (size_t i = 0; i < notation.length(); i++)
		if (!isdigit(notation[i]) && !isOperator(notation[i]) && !isspace(notation[i]))
			return (false);
	return (true);
}

bool	consecutiveDigits(std::string notation)
{
	int	count = 0;
	int	operatorCount = 0;

	for (size_t i = 0; i < notation.length(); i++)
	{
		if (isdigit(notation[i]))
			count++;
		else if (isOperator(notation[i]))
			operatorCount++;
		else if (!isspace(notation[i]))
			count = 0;
	}
	if (count - operatorCount != 1)
		return (true);
	return (false);
}
