/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:16:47 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/13 17:17:06 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exception.hpp"

Exception::Exception(const char *message) : _message(message){}

Exception::~Exception() throw(){}

const char	*Exception::what() const throw()
{
	return (_message.c_str());
}
