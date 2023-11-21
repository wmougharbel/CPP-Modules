/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:59:26 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/15 09:07:13 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	_type = "ice";
	std::cout << "\033[1;32m" << "Ice constructor created" << "\033[1;0m" << std::endl;
}

Ice::Ice(const Ice &copy)
{
	this->_type = copy._type;
	std::cout << "\033[1;32m" << "Ice copy constructor called" << "\033[0m" << std::endl;
}

Ice	&Ice::operator=(const Ice &object)
{
	if (this != &object)
		_type = object._type;
	return (*this);
	std::cout << "\033[1;32m" << "Ice copy assignment overload called" << "\033[0m" << std::endl;
}

Ice::~Ice()
{
	std::cout << "\033[1;31m" << "Ice destructor called" << "\033[0m" << std::endl;
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
