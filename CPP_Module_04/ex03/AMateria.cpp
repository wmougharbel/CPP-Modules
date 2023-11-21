/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:49:02 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/15 09:34:49 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Undefined")
{
	std::cout << "\033[1;32m" << "AMateria default constructor created" << "\033[1;0m" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "\033[1;32m" << "AMateria custom constructor created" << "\033[1;0m" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	this->_type = copy._type;
	std::cout << "\033[1;32m" << "Amateria copy constructor called" << "\033[0m" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &object)
{
	if (this != &object)
		_type = object._type;
	return (*this);
	std::cout << "\033[1;32m" << "Amateria copy assignment overload called" << "\033[0m" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "\033[1;31m" << "Amateria destructor called" << "\033[0m" << std::endl;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Materia uses " << getType() << " on " << target.getName() << std::endl;
}

std::string const	&AMateria::getType() const
{
	return (_type);
}
