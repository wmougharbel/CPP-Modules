/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:25:04 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/09 18:13:57 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap	sheldon("Sheldon");
	ScavTrap	robot("Scavvie");
	FragTrap	leonard("Leonard");
	std::cout << "Leonard: 'You.. You killed my father!'" << std::endl;
	leonard.attack(robot.getName());
	robot.takeDamage(leonard.getAttackDamage());
	std::cout << leonard.getName() << "'s efforts weren't enough to stop " << robot.getName() << std::endl;
	robot.beRepaired(30);
	robot.attack(leonard.getName());
	std::cout << "Scavvie: 'You are weak!'" << std::endl;
	robot.attack(leonard.getName());
	robot.attack(leonard.getName());
	leonard.takeDamage(3 * robot.getAttackDamage());
	std::cout << "Leonard: 'It's not over yet.'" << std::endl;
	leonard.setAttackDamage(100);
	leonard.attack(robot.getName());
	robot.takeDamage(leonard.getAttackDamage());
	leonard.beRepaired(60);
	leonard.highFivesGuys(); 
}
