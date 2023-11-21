/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:25:34 by wmoughar          #+#    #+#             */
/*   Updated: 2023/10/16 16:25:34 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon w1 = Weapon("spike");
	
	HumanA	bob("Bob", w1);
	bob.attack();
	HumanB	jim("Jim");
	jim.setWeapon(w1);
	jim.attack();
}