/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:25:04 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/13 11:05:28 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Undefined")
{
	std::cout << "\033[1;32m" << "Animal constructor created" << "\033[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	_type = copy._type;
}

Animal	&Animal::operator=(const Animal &object)
{
	if (this != &object)
		_type = object._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "\033[1;31m" << "Animal destructor called" << "\033[0m" << std::endl;
}

void	Animal::setType(std::string type)
{
	_type = type;
}

const std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "Animals usually make sound, this one is just undefined" << std::endl;
}
