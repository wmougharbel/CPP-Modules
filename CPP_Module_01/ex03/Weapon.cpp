/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:28:18 by wmoughar          #+#    #+#             */
/*   Updated: 2023/10/16 16:28:18 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	setType(weapon);
	std::cout << "Weapon constructor created" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon constructor deleted!" << std::endl;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType(void)
{
	return (_type);
}