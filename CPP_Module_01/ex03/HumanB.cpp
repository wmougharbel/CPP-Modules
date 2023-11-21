/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:42:42 by wmoughar          #+#    #+#             */
/*   Updated: 2023/10/30 15:40:55 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) //initialization
{
	std::cout << "Human B constructor created" << std::endl;
	_weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "Human B constructor deleted" << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	if (_weapon == NULL)
		std::cout << _name << " tries to attack but has no weapon\n";
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}