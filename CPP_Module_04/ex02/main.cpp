/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:36:30 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/13 15:56:42 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Dog	*dog = new Dog();
	Cat	*cat = new Cat();
	Dog	hound;
	Animal	*test = &hound;
	Animal	*otherCat = new Cat();

	dog->makeSound();
	cat->makeSound();
	test->makeSound(); // no need to delete afterwards because memory from hound already freed
	otherCat->makeSound();

	delete(dog);
	delete(cat);
	delete(otherCat);
}
