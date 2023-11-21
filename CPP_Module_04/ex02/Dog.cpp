/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:01:40 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/13 13:09:47 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _dogBrain(new Brain())
{
	_type = "Dog";
	std::cout << "\033[1;32m" << "Dog constructor created" << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &copy) : _dogBrain(new Brain(*(copy._dogBrain)))
{
	this->_type = copy._type;
}

Dog	&Dog::operator=(const Dog &object)
{
	if (this != &object)
	{
		this->_type = object._type;
		delete (_dogBrain);
		_dogBrain = new Brain(*(object._dogBrain));
	}
	return (*this);
}

Dog::~Dog()
{
	if (_dogBrain)
		delete(_dogBrain);
	std::cout << "\033[1;31m" << "Dog destructor called" << "\033[0m" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
