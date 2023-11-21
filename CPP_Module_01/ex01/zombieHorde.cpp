/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:45:13 by wmoughar          #+#    #+#             */
/*   Updated: 2023/10/15 21:45:13 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];
	
	if (!zombies)
	{
		std::cout << "Invalid or empty constructor!" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
		zombies[i].announce();
	}
	return (zombies);
}
