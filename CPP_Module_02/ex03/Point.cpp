/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:59:24 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/07 18:47:00 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{

}

Point::Point(const float x, const float y) : _x(x), _y(y)
{

}


Point::Point(const Point &object) : _x(object._x), _y(object._y)
{

}

Point	&Point::operator=(const Point &object)
{
	if (this != &object){}
	return (*this);
}

Point::~Point()
{

}

Fixed	Point::getX() const
{
	return (_x);
}

Fixed	Point::getY() const
{
	return (_y);
}
