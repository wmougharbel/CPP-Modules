/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:36:30 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/13 10:57:06 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal		*meta = new Animal();
	const Animal		*cat = new Cat();
	const Animal		*dog = new Dog();
	const WrongAnimal	*wrongMeta = new WrongAnimal();
	const WrongAnimal	*wrongCat = new WrongCat();
	
	std::cout << "Original Animal type: " << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << "Cat type: " << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << "Dog type: " << dog->getType() << std::endl;
	dog->makeSound();
	std::cout << "Wrong Animal type: " << wrongMeta->getType() << std::endl;
	wrongMeta->makeSound();
	std::cout << "Wrong cat type: " << wrongCat->getType() << std::endl;
	wrongCat->makeSound();
	delete(dog);
	delete(cat);
	delete(wrongCat);
	delete(wrongMeta);
	delete(meta);
}
