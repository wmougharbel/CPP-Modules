/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dateCheck.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:32:47 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/17 13:40:24 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	checkDateFormat(std::string date)
{
	int	count = 0;
	
	if (date.length() != 10)
		return (false);
	for (int i = 0; i < 10; i++)
	{
		if (!isdigit(date[i]) && date[i] != '-')
			return (false);
		else if (date[i] == '-')
			count++;
	}
	if (count != 2)
		return (false);
	if (date[4] != '-' && date[7] != '_')
		return (false);
	return (true);
}

bool	isLeapYear(std::string date)
{
	int	year;

	if (!checkDateFormat(date))
		return (false);
	year = std::atoi(date.substr(0, 4).c_str());
	if (year % 4 == 0)
		return (true);
	return (false);
}

bool	checkDayMonth(std::string date)
{
	int	month;
	int	day;

	if (!checkDateFormat(date))
		return (false);

	month = std::atoi(date.substr(5, 2).c_str());
	day = std::atoi(date.substr(8, 2).c_str());
	if ((month < 1 || month > 12) || (day < 1 || day > 31))
		return (false);
	if (month == 2)
	{
		if (isLeapYear(date) && day > 29)
			return (false);
		if (!isLeapYear(date) && day > 28)
			return (false);
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return (false);
	return (true);
}

bool	checkDate(std::string date)
{
	if (!checkDateFormat(date))
		return (false);
	if (!checkDayMonth(date))
		return (false);
	return (true);
}

std::string	trimSpaces(std::string date)
{
	std::string	newDate;
	size_t		start = 0;
	size_t		end;

	while (isspace(date[start]))
		start++;
	end = start;
	while (end < date.length() && !isspace(date[end]))
		end++;
	newDate = date.substr(start, end);
	return (newDate);
}
