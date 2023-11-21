/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:20:21 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/15 11:46:59 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_memory[i] = NULL;
	std::cout << "\033[1;32m" << "MateriaSource constructor created" << "\033[0m" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		this->_memory[i] = copy._memory[i];
	std::cout << "\033[1;32m" << "MateriaSource copy constructor called" << "\033[0m" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &object)
{
	if (this != &object)
	{
		for (int i = 0; i < 4; i++)
		this->_memory[i] = object._memory[i];
	}
	std::cout << "\033[1;32m" << "MateriaSource copy assignment overload called" << "\033[0m" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_memory[i])
			delete(_memory[i]);
	}
	std::cout << "\033[1;31m" << "MateriaSource destructor called" << "\033[0m" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_memory[i] == NULL)
		{
			_memory[i] = m;
			break;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_memory[i] && _memory[i]->getType() == type)
			return (_memory[i]->clone());
	}
	return (0);
}
