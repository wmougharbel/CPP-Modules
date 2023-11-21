/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:56:08 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/08 09:40:01 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	ft_abs(float num)
{
	if (num < 0)
		num *= -1;
	return (num);
}

float	calculateTriangleArea(Point const a, Point const b, Point const c)
{
	return (0.5 * ft_abs(a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
			+ b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())
			+ c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	triangleArea;
	float	firstTriangleArea;
	float	secondTriangleArea;
	float	thirdTriangleArea;
	
	triangleArea = calculateTriangleArea(a, b, c);	
	if (triangleArea == 0.0)
		return (false);
	firstTriangleArea = calculateTriangleArea(a, b, point);
	secondTriangleArea = calculateTriangleArea(a, c, point);
	thirdTriangleArea = calculateTriangleArea(b, c, point);
	if (firstTriangleArea == 0.0 || secondTriangleArea == 0.0 || thirdTriangleArea == 0.0)
		return (false);
	if (firstTriangleArea + secondTriangleArea + thirdTriangleArea != triangleArea)
		return (false);
	return (true);
}
