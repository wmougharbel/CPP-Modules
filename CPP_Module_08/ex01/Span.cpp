/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:24:15 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/12 10:57:57 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N) : _size(N), _availableSpace(N), _numbers(std::vector<int>(N))
{
	std::cout << "Span of size " << _numbers.size() << " was created" << std::endl;
}

Span::Span(const Span &copy) : _size(copy._size), _availableSpace(copy._availableSpace), _numbers(copy._numbers)
{
}

Span	&Span::operator=(const Span &object)
{
	if (this != &object)
	{
		_size = object._size;
		_availableSpace = object._availableSpace;
		_numbers = object._numbers;
	}
	return (*this);
}

Span::~Span()
{
}

int	Span::getNumber(int i) const
{
	return (_numbers[i]);
}

void	Span::addNumber(int newNumber)
{
	if (_availableSpace > 0)
	{
		_numbers.insert(_numbers.begin() + (_size - _availableSpace), newNumber);
		_availableSpace--;
	}
	else
		throw(VectorFullException());
}

int	Span::longestSpan()
{
	if (_size < 2 || _size - _availableSpace < 2)
		throw (TooFewNumbersException());
	return ((*std::max_element(_numbers.begin(), _numbers.begin() + (_size - _availableSpace)) -
			*std::min_element(_numbers.begin(), _numbers.begin() + (_size - _availableSpace))));
}

int Span::shortestSpan()
{
	if (_size < 2 || _size - _availableSpace < 2)
		throw (TooFewNumbersException());
	std::vector<int>copy(_numbers.begin(), _numbers.end());
	std::sort(copy.begin(), copy.begin() + (_size - _availableSpace));
	int min = INT_MAX;
	for (unsigned int i = 1; i < _size; i++)
	{
		if ((copy[i] - copy[i - 1]) < min)
			min = (copy[i] - copy[i - 1]);
	}
	return (min);
}

void	Span::fillVector(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_availableSpace < static_cast<unsigned int>(std::distance(begin, end)))
		throw (VectorFullException());

	_numbers.insert(_numbers.begin(), begin, end);
	_availableSpace -= static_cast<unsigned int>(std::distance(begin, end));
}
