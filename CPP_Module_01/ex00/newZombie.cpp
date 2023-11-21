/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:22:26 by wmoughar          #+#    #+#             */
/*   Updated: 2023/09/30 23:22:26 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie;

	if (!newZombie)
	{
		std::cout << "Invalid or empty constructor!" << std::endl;
		return (NULL);
	}
	newZombie->setName(name);
	return (newZombie);
}
