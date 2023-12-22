/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:42:07 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/21 14:56:17 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string file): _file(file)
{
	getFile();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	_database = copy._database;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &object)
{
	if (this != &object)
		_database = object._database;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(){}

void	BitcoinExchange::getFile()
{
	std::ifstream	input;
	
	input.open(_file.c_str());
	if (!input.is_open())
		throw (Exception("Failed to open input file!"));
	if (input.peek() == EOF)
		throw (Exception("Empty File!"));
	storeDatabase();
	parseInputFile(input);
}

void	BitcoinExchange::storeDatabase()
{
	std::ifstream	input;
	std::string		line;
	std::string		date;
	std::string		value;
	size_t			pos;
	
	input.open("database/data.csv");
	if (!input.is_open())
		throw (Exception("Failed to open database file!"));
	if (input.peek() == EOF)
		throw (Exception("Empty File!"));
	getline(input, line);
	while (getline(input, line))
	{
		pos = line.find(',');
		if (pos == std::string::npos)
			throw (Exception("Invalid database! No separator was found."));
		date = line.substr(0, pos);
		value = line.substr(pos + 1, line.length() - pos);
		if (!checkDate(date))
			throw (Exception("Invalid database! Invalid date."));
		_database[date] = checkAndConvertValue(value);
	}
}

void	BitcoinExchange::parseInputFile(std::ifstream &input)
{
	std::string	line;
	std::string	date;
	std::string	value;
	float		floatVal;
	size_t		pos;

	getline(input, line);
	while (getline(input, line))
	{
		pos = line.find('|');
		if (pos == std::string::npos || std::count(line.begin(), line.end(), '|') != 1)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		date = trimSpaces(line.substr(0, pos));
		value = trimSpaces(line.substr(pos + 1, line.length() - pos));
		if (!checkDate(date) || !isValueDigit(value))
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		floatVal = std::atof(value.c_str());
		if (!checkInputValue(floatVal))
			continue;
		if (_database.find(date) != _database.end())
			std::cout << date << " => " << floatVal << " = " << floatVal * _database[date] << std::endl;
		else
		{
			std::map<std::string, float>::iterator it = _database.lower_bound(date);
			if (it != _database.begin())
				it--;
			std::cout << date << " => " << floatVal << " = " << floatVal * _database[it->first] << std::endl;
		}
	}
}
