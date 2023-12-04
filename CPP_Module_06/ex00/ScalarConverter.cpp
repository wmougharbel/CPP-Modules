/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:38:09 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/02 16:49:43 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Scalar Converter constructor created" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Scalar Converter destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &object)
{
	if (this != &object){}
	return (*this);
}

void	ScalarConverter::convert(const std::string &argument)
{
	switch (checkVariableType(argument))
	{
		case 1:
			convertChar(argument);
			break;

		case 2:
			convertInt(argument);
			break;

		case 3:
			convertFloat(argument);
			break;

		case 4:
			convertDouble(argument);
			break;

		case 5:
			convertPseudoLiterals(argument);
			break;

		default:
			std::cout << "Unknown type" << std::endl;
	}
}
