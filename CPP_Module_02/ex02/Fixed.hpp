/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:37:28 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/08 09:27:47 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;

	public:
		//constructors and copy constructor
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &object);

		//overload assignment & arithmetic operators
		Fixed	&operator=(const Fixed &object);
		Fixed	operator+(const Fixed &object);
		Fixed	operator-(const Fixed &object);
		Fixed	operator*(const Fixed &object);
		Fixed	operator/(const Fixed &object);
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		//overload comparision operators
		bool	operator!=(const Fixed &object);
		bool	operator==(const Fixed &object);
		bool	operator<(const Fixed &object);
		bool	operator>(const Fixed &object);
		bool	operator<=(const Fixed &object);
		bool	operator>=(const Fixed &object);

		//destructor
		~Fixed();

		//member functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	&min(Fixed &num1, Fixed &num2);
		static const Fixed	&min(const Fixed &num1, const Fixed &num2);
		static Fixed	&max(Fixed &num1, Fixed &num2);
		static const Fixed	&max(const Fixed &num1, const Fixed &num2);
};

std::ostream	&operator<<(std::ostream &output, const Fixed &object);

#endif
