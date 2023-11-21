/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:25:35 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/06 18:16:20 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) //initializing value to 0
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _value(value << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value(static_cast<int>((value) * (1 << _fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object) //copy the content of an object into another
{
	this->_value = object._value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &object) //overloading the "=" operator to make the expression constructorA = constructorB viable
{
	if (this != &object)
		this->_value = object._value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &object)
{
	float	value = object.toFloat(); //to be able to print everything
	output << value;
	return (output);
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

float	Fixed::toFloat(void) const
{
	return(static_cast<float>(_value) / (1 << _fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}
