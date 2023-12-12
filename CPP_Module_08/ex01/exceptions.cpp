/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:55:38 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/12 10:58:36 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exceptions.hpp"

const char	*VectorFullException::what() const throw()
{
	return ("Vector is already full!");
}

const char	*TooFewNumbersException::what() const throw()
{
	return ("Too few numbers in vector to perform the operation!");
}
