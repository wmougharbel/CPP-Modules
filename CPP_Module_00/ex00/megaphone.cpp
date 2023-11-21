/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:52:02 by wmoughar          #+#    #+#             */
/*   Updated: 2023/09/11 13:52:12 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	toUpperCase(std::string message)
{
	for(int i = 0; i < (int)message.length(); i++)
		message[i] = std::toupper(message[i]);
	return (message);
}

int main(int argc, char **argv)
{
	std::string message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	
	if (argc == 1)
		std::cout << message;
	else
	{
		for(int i = 1; i < argc; i++)
			std::cout << toUpperCase(argv[i]) << " ";
	}
	std::cout << std::endl;
}
