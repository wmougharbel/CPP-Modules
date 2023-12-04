/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:15:47 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/03 13:52:44 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data		*data = new Data;
	
	data->name = "Tokyo";
	std::cout << "Name: " << data->name << std::endl;
	std::cout << "Data: " << data << std::endl;
	
	uintptr_t	raw = Serializer::serialize(data);
	std::cout << "Raw: " << raw << std::endl;

	data = Serializer::deserialize(raw);
	std::cout << "Data after deserialization: " << data << std::endl;

	delete(data);
}
