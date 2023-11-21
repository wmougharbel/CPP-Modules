/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:47:49 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/13 11:04:37 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wrong Animal")
{
	std::cout << "\033[1;32m" << "WrongAnimal constructor created" << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	_type = copy._type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &object)
{
	if (this != &object)
		_type = object._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[1;31m" << "WrongAnimal destructor called" << "\033[0m" << std::endl;
}

void	WrongAnimal::setType(std::string type)
{
	_type = type;
}

const std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal sound!" << std::endl;
}
