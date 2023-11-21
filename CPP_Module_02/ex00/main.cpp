/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:14:06 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/17 10:30:06 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
	{
	Fixed	a;
	Fixed	b( a );
	Fixed	c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	// a.setRawBits(15);
	// b = a;
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;
	// c = a;
	// std::cout << c.getRawBits() << std::endl;
	return (0);
}
