/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:44:44 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/10 14:30:05 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap came to avenge his Father - ClapTrap..." << std::endl;
}

FragTrap::FragTrap(const std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " + _name + " came to avenge his Father - ClapTrap..." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
}

FragTrap	&FragTrap::operator=(const FragTrap &object)
{
	if (this != &object)
	{
		this->_name = object._name;
		this->_hitPoints = object._hitPoints;
		this->_energyPoints = object._energyPoints;
		this->_attackDamage = object._attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "The FragTrap's job is done now. FragTrap can finally rest..." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\033[1;34m" <<"Dad... C-Could you give me a high five? One last time? the FragTrap asked his dead father." << "\033[1;0m" <<std::endl;
}
