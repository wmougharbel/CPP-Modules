/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:14:00 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/17 10:33:16 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) //initializing value to 0
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &object) //copy the content of an object into another
{
	_value = object._value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed &object) //overloading the "=" operator to make the expression constructorA = constructorB viable
{
	_value = object._value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const //does not modify the content
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}
