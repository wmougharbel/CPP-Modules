/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 08:39:44 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/02 08:39:44 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convertUtils.hpp"

void	convertChar(const std::string &argument)
{
	char	charVal = argument[0];
	int		intVal = static_cast<int>(charVal);
	float	floatVal = static_cast<float>(charVal);
	double	doubleVal = static_cast<double>(charVal);

	std::cout << "Char: '" << charVal << "'"<< std::endl;
	std::cout << "Integer: " << intVal << std::endl;
	std::cout << "Float: " << floatVal << ".0f" << std::endl;
	std::cout << "Double: " << doubleVal << ".0" << std::endl;
}

void	convertInt(const std::string &argument)
{
	int		intVal = std::atoi(argument.c_str());
	char	charVal = static_cast<char>(intVal);
	float	floatVal = static_cast<float>(intVal);
	double	doubleVal = static_cast<double>(intVal);

	if (intVal < 32 || intVal > 126)
		std::cout << "Char: Non Displayable" << std::endl;
	else
		std::cout << "Char: '" << charVal << "'" << std::endl;
	std::cout << "Integer: " << intVal << std::endl;
	if (argument.length() < 7)
	{
		std::cout << "Float: " << floatVal << ".0f" << std::endl;
		std::cout << "Double: " << doubleVal << ".0" << std::endl;
	}
	else
	{
		std::cout << "Float: " << floatVal << "f" << std::endl;
		std::cout << "Double: " << doubleVal << std::endl;
	}
}

void	convertFloat(const std::string &argument)
{
	float	floatVal = std::atof(argument.c_str());
	int		intVal = static_cast<int>(floatVal);
	char	charVal = static_cast<char>(floatVal);
	double	doubleVal = static_cast<double>(floatVal);

	if (floatVal < 32.0 || floatVal > 126.0)
		std::cout << "Char: Non Displayable" << std::endl;
	else
		std::cout << "Char: '" << charVal << "'" << std::endl;
	if ((int)floatVal > 2147483647 || (int)floatVal < -2147483648)
		std::cout << "Integer: Impossible" << std::endl;
	else
		std::cout << "Integer: " << intVal << std::endl;
	if (fmod(floatVal, 1.0) == 0.0 && (argument.find('.') <= 5))
	{
		std::cout << "Float: " << floatVal << ".0f" << std::endl;
		std::cout << "Double: " << doubleVal << ".0" << std::endl;
	}
	else
	{
		std::cout << "Float: " << floatVal << 'f' << std::endl;
		std::cout << "Double: " << doubleVal << std::endl;
	}
}

void	convertDouble(const std::string &argument)
{
	char	*end;
	double	doubleVal = strtod(argument.c_str(), &end);
	int		intVal = static_cast<int>(doubleVal);
	char	charVal = static_cast<char>(doubleVal);
	float	floatVal = static_cast<float>(doubleVal);

	if (doubleVal < 32.0 || doubleVal > 126.0)
		std::cout << "Char: Non Displayable" << std::endl;
	else
		std::cout << "Char: '" << charVal << "'" << std::endl;
	if (doubleVal > 2147483647 || doubleVal < -2147483648)
		std::cout << "Integer: Impossible" << std::endl;
	else
		std::cout << "Integer: " << intVal << std::endl;
	if (fmod(doubleVal, 1.0) == 0.0 && (argument.find('.') <= 5))
	{
		std::cout << "Float: " << floatVal << ".0f" << std::endl;
		std::cout << "Double: " << doubleVal << ".0" << std::endl;
	}
	else
	{
		std::cout << "Float: " << floatVal << 'f' << std::endl;
		std::cout << "Double: " << doubleVal << std::endl;
	}
}

void	convertPseudoLiterals(const std::string &argument)
{
	char	*end;
	float	floatVal = std::atof(argument.c_str());
	double	doubleVal = strtod(argument.c_str(), &end);
	
	std::cout << "Char: Impossible" << std::endl;
	std::cout << "Integer: Impossible" << std::endl;
	std::cout << "Float: " << floatVal << 'f' << std::endl;
	std::cout << "Double: " << doubleVal << std::endl;
}
