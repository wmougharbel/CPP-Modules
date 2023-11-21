/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:52:43 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/15 12:36:26 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	setType("Cat");
	std::cout << "\033[1;32m" << "Cat constructor created" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->_type = copy._type;
	std::cout << "\033[1;32m" << "Cat copy constructor called" << "\033[0m" << std::endl;
}

Cat &Cat::operator=(const Cat &object)
{
	if (this != &object)
		this->_type = object._type;
	std::cout << "\033[1;32m" << "Cat copy assignment overload called" << "\033[0m" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\033[1;31m" << "Cat destructor called" << "\033[0m" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
