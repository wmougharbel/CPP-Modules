/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:52:24 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/13 12:02:06 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[1;32m" << "Brain Constructor created" << "\033[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain	&Brain::operator=(const Brain &object)
{
	if (this != &object)
	{
		for(int i = 0; i < 100; i++)
			this->_ideas[i] = object._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "\033[1;31m" << "Brain destructor called" << std::endl;
}
