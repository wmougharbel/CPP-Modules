/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:25:04 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/10 10:21:11 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap	sheldon("Sheldon");
	ClapTrap	crapBag("Crap Bag");
	ScavTrap	robot("Scavvie");
	robot.setAttackDamage(100);
	robot.attack(sheldon.getName());
	sheldon.takeDamage(robot.getAttackDamage());
	crapBag.attack(robot.getName());
	robot.takeDamage(99);
	std::cout << "Scavvie:'I WILL NOT DIE, NOT TODAY!" << std::endl;
	robot.beRepaired(99);
	robot.attack(crapBag.getName());
	crapBag.takeDamage(100);
	std::cout << "Crap Bag: NOOOOOOOO!" << std::endl;
	std::cout << "Scavvie: SCAVTRAPS EMERGED VICTORIOUS!" << std::endl;
	robot.guardGate();
}
