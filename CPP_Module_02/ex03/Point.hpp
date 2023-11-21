/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:53:55 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/07 18:46:45 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>
#include "Fixed.hpp"


class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &object);
		Point	&operator=(const Point &object);
		~Point();
		Fixed	getX() const;
		Fixed	getY() const;
};

float	ft_abs(float num);
float	calculateTriangleArea(Point const a, Point const b, Point const c);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
