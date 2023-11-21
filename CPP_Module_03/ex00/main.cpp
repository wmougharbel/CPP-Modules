/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:25:04 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/09 13:52:30 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	crapTlap;
	ClapTrap	sheldon("Sheldon");
	ClapTrap	crapBag("Crap Bag");

	sheldon.attack(crapBag.getName());
	crapBag.takeDamage(0);
	crapBag.setAttackDamage(5);
	crapBag.attack(sheldon.getName());
	sheldon.takeDamage(5);
	crapBag.attack(sheldon.getName());
	sheldon.takeDamage(5);
	sheldon.beRepaired(10);
}
