/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:44:55 by wmoughar          #+#    #+#             */
/*   Updated: 2023/09/11 13:49:49 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void start()
{
	PhoneBook p1;
	std::string  input;
	int index = 0;
	while (1)
	{
		std::cout << "Choose desired operation: ADD - SEARCH - EXIT" << std::endl;
		std::cin >> input;
		if (input.compare("EXIT") == 0)
			break ;
		else if (input.compare("ADD") == 0)
			index = p1.addToPhoneBook(index);
		else if (input.compare("SEARCH") == 0)
			p1.printContact();
	}
}

void	resetContact(Contact toReset)
{
	toReset.setFirstName("");
	toReset.setLastName("");
	toReset.setNickname("");
	toReset.setPhoneNumber("");
	toReset.setDarkestSecret("");
}

int main(int argc, char **argv)
{
	(void)argv;
	if (argc > 1)
		return (std::cout << "Only executable expected!\n", 1);
	start();
	return (0);
}