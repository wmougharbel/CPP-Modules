/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valueCheck.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:27:04 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/17 13:52:58 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.hpp"

float	checkAndConvertValue(std::string value)
{
	int		start = 0;
	int		count = 0;
	float	floatVal; 
	
	if (value[0] == '-' || value[0] == '+')
		start++;
	for (size_t i = start; i < value.length(); i++)
	{
		if (!isdigit(value[i]) && value[i] != '.')
			throw (Exception("Value is not a number!"));
		if (value[i] == '.')
			count++;
	}
	floatVal = std::atof(value.c_str());
	if (floatVal < 0.0)
		throw (Exception("Value is not a positive integer!"));
	if (count > 1)
		throw (Exception("More than one decimal point were found!"));
	return (floatVal);
}

bool	checkInputValue(float value)
{
	if (value > 1000.0)
		return (std::cerr << "Error: too large a number.\n", false);
	if (value < 0.0)
		return (std::cerr << "Error: not a positive integer.\n", false);
	return (true);
}

bool	isValueDigit(std::string value)
{
	for (unsigned int i = 0; i < value.length(); i++)
		if (!isdigit(value[i]) && value[i] != '.')
			return (false);
	if (std::count(value.begin(), value.end(), '.') > 1)
		return (false);
	return (true);
}
