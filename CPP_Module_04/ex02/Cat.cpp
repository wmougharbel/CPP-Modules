/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:52:43 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/13 13:10:06 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _catBrain(new Brain())
{
	setType("Cat");
	std::cout << "\033[1;32m" << "Cat constructor created" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &copy) : _catBrain(new Brain(*(copy._catBrain)))
{
	this->_type = copy._type;
}

Cat &Cat::operator=(const Cat &object)
{
	if (this != &object)
	{
		this->_type = object._type;
		delete (_catBrain);
		_catBrain = new Brain(*(object._catBrain));
	}
	return (*this);
}

Cat::~Cat()
{
	if (_catBrain)
		delete (_catBrain);
	std::cout << "\033[1;31m" << "Cat destructor called" << "\033[0m" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
