/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:14:35 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/09 18:16:00 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default")
{
	std::cout << "ClapTrap default constructor created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100),
	_energyPoints(100), _attackDamage(30)
{
	std::cout << "ClapTrap custom constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &object)
{
	if (this != &object)
	{
		this->_name = object._name;
		this->_hitPoints = object._hitPoints;
		this->_energyPoints = object._energyPoints;
		this->_attackDamage = object._attackDamage;
	}
	std::cout << "Overload assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
		std::cout << _name << " doesn't have enough energy points to attack" << std::endl;
	else
	{
		_energyPoints--;
		std::cout << "\033[1;33m" << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << "\033[0m" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints >= amount)
		_hitPoints -= amount;
	else
		_hitPoints = 0;
	if (_hitPoints == 0)
		std::cout << "\033[1;31m" << "A not so precious life ("+ _name +") was lost today" << "\033[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints < 1)
		std::cout << _name << " doesn't have enough points to regenerate" << std::endl;
	if (_hitPoints == 0)
		std::cout << "Too late! Cannot resurrect " << _name << std::endl; 
	else if ((amount + _hitPoints) > 10)
	{
		_hitPoints = 10;
		std::cout << "\033[1;32m" << _name << " is back on Track baby" << "\033[0m" << std::endl;
	}
	else
	{
		_hitPoints += amount;
		std::cout << _name << " regenerated " << amount << " HPs" << std::endl;
	}
}

std::string	ClapTrap::getName()
{
	return (_name);
}

void	ClapTrap::setAttackDamage(unsigned int damage)
{
	_attackDamage = damage;
}

unsigned int	ClapTrap::getAttackDamage()
{
	return (_attackDamage);
}
