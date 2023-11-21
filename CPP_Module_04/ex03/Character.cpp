/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:30:38 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/15 12:24:04 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] =  NULL;
	std::cout << "\033[1;32m" << "Character default constructor created" << "\033[0m" << std::endl;
}

Character::Character(const Character &copy)
{
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i];
	std::cout << "\033[1;32m" << "Character copy constructor called" << "\033[0m" << std::endl;
}

Character	&Character::operator=(const Character &object)
{
	if (this != &object)
	{
		this->_name = object._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = object._inventory[i];
	}
	std::cout << "\033[1;32m" << "Character copy overload assignment called" << "\033[0m" << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete(this->_inventory[i]);
	}
	std::cout << "\033[1;31m" << "Character destructor called" << "\033[0m" << std::endl;
}

std::string const	&Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (m == _inventory[i])
			m = _inventory[i]->clone();
	}
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << "Equipped" << std::endl;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !_inventory[idx])
		std::cout << "Cannot unequip" << std::endl;
	else
	{
		if (this->_inventory[idx] != NULL)
			delete(this->_inventory[idx]);
		this->_inventory[idx] = NULL;
		std::cout << "Unequipped " << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || !_inventory[idx])
		std::cout << "Nothing to use!" << std::endl;
	else
		_inventory[idx]->use(target);
}
