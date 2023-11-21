/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:48:46 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/15 12:24:39 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


int main()
{
	IMateriaSource *src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	me->unequip(1);
	std::cout << "TMP: " << tmp << std::endl;
	me->use(1, *bob);

	//equipping and unequipping to test the limits
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me->unequip(2);
	me->equip(tmp);

	delete (bob);
	delete(me);
	delete(src);
}
