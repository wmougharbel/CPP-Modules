/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:35:15 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/09 17:29:29 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap custom constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &object)
{
	if (this != &object)
	{
		this->_name = object._name;
		this->_hitPoints = object._hitPoints;
		this->_energyPoints = object._energyPoints;
		this->_attackDamage = object._attackDamage;
	}
	std::cout << "ScavTrap overload assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "\033[1;35m" << "Scavtrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << "\033[0m" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "\033[1;34m" << "ScavTrap is now in Gate Keeper mode" << "\033[0m" << std::endl;
}
