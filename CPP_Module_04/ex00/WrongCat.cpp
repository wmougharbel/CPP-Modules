/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:50:01 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/15 12:41:43 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	setType("Wrong Cat");
	std::cout << "\033[1;32m" <<"Wrong Cat constructor created" << "\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	this->_type = copy._type;
}

WrongCat &WrongCat::operator=(const WrongCat &object)
{
	if (this != &object)
		this->_type = object._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "\033[1;31m" << "Wrong Cat destructor called" << "\033[0m" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong cat should not print this" << std::endl;
}
