/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:51:47 by wmoughar          #+#    #+#             */
/*   Updated: 2023/10/15 21:51:47 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//delete[] is used to free the memory allocated for an array of objects
//delete is used to free the memory allocated for a single object
int main()
{
    Zombie *z1 = zombieHorde(5, "John cena");
    delete[] (z1);
}
