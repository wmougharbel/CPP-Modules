/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:42:57 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/08 09:41:05 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

//point e is inside the triangle, point f is outstide, point h is on the border(outside)

int main( void ) 
{	
	Point	a;
	Point	b( 4.5f, 0 );
	Point	c( b );
	Point	d( 2.0f, 3.5f );
	Point	e( 2.5f, 1.5f );
	Point	g( 0.0f, 0.0f );
	Point	h = g;

	if (bsp( a, c, d, e ))
		std::cout << "Point e is inside triangle acd" << std::endl;
	else
		std::cout << "Point e is not inside triangle acd" << std::endl;
	Point f( 4.0f, 1.0f );
	if (bsp( a, c, d, f ))
		std::cout << "Point f is inside triangle acd" << std::endl;
	else
		std::cout << "Point f is not inside triangle acd" << std::endl;
	if (bsp( a, c, d, h ))
		std::cout << "Point h is inside triangle acd" << std::endl;
	else
		std::cout << "Point h is not inside triangle acd" << std::endl;
	return 0;
}
