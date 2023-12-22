/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:32:20 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/21 15:07:48 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(std::string notation) : _notation(notation)
{
	calculate(_notation);
}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN	&RPN::operator=(const RPN &object)
{
	if (this != &object)
		*this = object;
	return (*this);
}

RPN::~RPN(){}

void	RPN::checkInvalidNotation(std::string notation)
{
	if (notation.empty())
		throw (Exception("Empty input string!"));
	if (!isNumeric(notation))
		throw (Exception("Invalid character in notation!"));
	if (notation.find('+') == std::string::npos && notation.find('-') == std::string::npos
		&& notation.find('*') == std::string::npos && notation.find('/') == std::string::npos)
		throw (Exception("Operator not found!"));
	if (consecutiveDigits(notation))
		throw (Exception("Too many consecutive numbers!"));
	if (!isOperator(notation[notation.length() - 1]))
		throw (Exception("RPN should end with an operator!"));
}

void	RPN::storeInStack(int &a, int &b, char op)
{
	char	operations[4] = {'+', '-', '*', '/'};
	int		i;

	if (!isOperator(op))
		throw (Exception("Not an operator!"));
	for (i = 0; i < 4; i++)
		if (op == operations[i])
			break;

	switch (i)
	{
		case 0:
			_equation.push(a + b);
			break ;
		
		case 1:
			_equation.push(a - b);
			break ;

		case 2:
			_equation.push(a * b);
			break ;

		case 3:
			if (b == 0)
				throw (Exception("Cannot divide by 0!"));
			_equation.push(a / b);
			break ;
	}
}

void	RPN::calculate(std::string notation)
{
	int	number;
	int	a;
	int	b;

	checkInvalidNotation(notation);
	for (size_t i = 0; i < notation.length(); i++)
	{
		if (isspace(notation[i]))
			continue;
		else if (isdigit(notation[i]))
		{
			number = notation[i] - '0';
			_equation.push(number);
		}
		else if (isOperator(notation[i]) && _equation.size() >= 2)
		{
			a = _equation.top();
			_equation.pop();
			b = _equation.top();
			_equation.pop();
			storeInStack(b, a, notation[i]);
		}
		else
			throw (Exception("Invalid operation!"));
	}
	std::cout << _equation.top() << std::endl;
}
