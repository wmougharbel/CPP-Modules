/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:37:44 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/08 09:32:50 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	a = Fixed(15);
	c = Fixed(4);
	std::cout << "Number 1 = " << a << "\tNumber 2 = " << c << std::endl;
	std::cout << "Division: " << a / c << std::endl;
	std::cout << "Multiplication: " << a * c << std::endl;
	std::cout << "Addition: " << a + c << std::endl;
	std::cout << "Subtraction: " << a - c << std::endl;
	return 0;
}
