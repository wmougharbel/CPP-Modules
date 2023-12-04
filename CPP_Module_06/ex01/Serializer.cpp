/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:07:34 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/03 13:36:46 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer constructor created" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
	*this = copy;
}

Serializer	&Serializer::operator=(const Serializer &object)
{
	if (this != &object){}
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	std::cout << "Serialize function called!" << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	std::cout << "Deserialize function called!" << std::endl;
	return (reinterpret_cast<Data *>(raw));
}
