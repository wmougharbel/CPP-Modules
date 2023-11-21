/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:36:30 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/15 12:52:01 by wmoughar         ###   ########.fr       */
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
	Animal	*animals[50];
	
	// create cats and dogs array
	for (int i = 0; i < 50 ; i++)
	{
		if (i < 25)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	//call the makesound to make sure that everything was allocated correctly
	for (int i = 0; i < 50; i++)
		animals[i]->makeSound();
	
	//delete each object to free memory
	for (int i = 0; i < 50; i++)
		delete (animals[i]);
}
