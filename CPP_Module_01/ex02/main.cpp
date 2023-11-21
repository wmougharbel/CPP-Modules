/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:53:04 by wmoughar          #+#    #+#             */
/*   Updated: 2023/10/16 11:53:04 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = new std::string(brain); //creating a pointer to string
	std::string &stringREF = brain;

	std::cout << "String address: " << &brain << std::endl;
	std::cout << "Pointer address: " << &stringPTR << std::endl;
	std::cout << "Reference address: " << &stringREF << std::endl;
	std::cout << "\n====================\n\n";
	std::cout << "String: " << brain << std::endl;
	std::cout << "Pointer: " << stringPTR << std::endl;
	std::cout << "Reference: " << stringREF << std::endl;

	//deallocate string memory
	delete (stringPTR);
}
