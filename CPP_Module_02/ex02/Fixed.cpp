/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:37:16 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/08 09:35:02 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) //initializing value to 0
{

}

Fixed::Fixed(const int value) : _value(value << _fractionalBits)
{

}

Fixed::Fixed(const float value) : _value(static_cast<int>((value) * (1 << _fractionalBits)))
{

}

Fixed::Fixed(const Fixed &object) //copy the content of an object into another
{
	this->_value = object._value;

}

Fixed	&Fixed::operator=(const Fixed &object) //overloading the "=" operator to make the expression constructorA = constructorB viable
{
	if (this != &object)
		this->_value = object._value;

	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &object)
{
	float	value = object.toFloat(); //to be able to print everything
	output << value;
	return (output);
}

Fixed	Fixed::operator+(const Fixed &object)
{
	return (this->toFloat() + object.toFloat());
}

Fixed	Fixed::operator-(const Fixed &object)
{
	return (this->toFloat() - object.toFloat());
}

Fixed	Fixed::operator*(const Fixed &object)
{
	return ((this->toFloat() * object.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &object)
{
	if (object.toFloat() == 0)
		return (std::cout << "Cannot divide with ", 0);
	return (this->toFloat() / object.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	increment(*this);
	++_value;
	return (increment);
}

Fixed	&Fixed::operator--(void)
{
	_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	decrement(*this);
	--_value;
	return (decrement);
}

bool	Fixed::operator==(const Fixed &object)
{
	return (this->_value == object._value);
}

bool	Fixed::operator!=(const Fixed &object)
{
	return (this->_value != object._value);
}

bool	Fixed::operator<(const Fixed &object)
{
	return (this->_value < object._value);
}

bool	Fixed::operator<=(const Fixed &object)
{
	return (this->_value <= object._value);
}

bool	Fixed::operator>(const Fixed &object)
{
	return (this->_value > object._value);
}

bool	Fixed::operator>=(const Fixed &object)
{
	return (this->_value >= object._value);
}

Fixed::~Fixed()
{

}

int	Fixed::getRawBits(void) const //does not modify the content
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed	&Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1._value < num2._value)
		return (num1);
	return (num2);
}

const Fixed	&Fixed::min(const Fixed &num1, const Fixed &num2)
{
	if (num1._value < num2._value)
		return (num1);
	return (num2);
}

Fixed	&Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1._value > num2._value)
		return (num1);
	return (num2);
}

const Fixed	&Fixed::max(const Fixed &num1, const Fixed &num2)
{
	if (num1._value > num2._value)
		return (num1);
	return (num2);
}
