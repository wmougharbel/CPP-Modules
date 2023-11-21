/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:03:12 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/15 09:33:15 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	_type = "cure";
	std::cout << "\033[1;32m" << "Cure constructor created" << "\033[1;0m" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	this->_type = copy._type;
	std::cout << "\033[1;32m" << "Cure copy constructor called" << "\033[0m" << std::endl;
}

Cure	&Cure::operator=(const Cure &object)
{
	if (this != &object)
		_type = object._type;
	return (*this);
	std::cout << "\033[1;32m" << "Cure copy assignment overload called" << "\033[0m" << std::endl;
}

Cure::~Cure()
{
	std::cout << "\033[1;31m" << "Cure destructor called" << "\033[0m" << std::endl;
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
