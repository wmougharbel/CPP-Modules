/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:58:14 by wmoughar          #+#    #+#             */
/*   Updated: 2023/09/12 13:17:30 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

PhoneBook::PhoneBook(){};
PhoneBook::~PhoneBook(){};

void PhoneBook::createContact(int index)
{
	std::string newFirstName;
	std::string newLastName;
	std::string newNickname;
	std::string newSecret;
	std::string newPhoneNumber;

	//setting first name
	std::cout << "Enter first name: ";
	std::cin >> newFirstName;
	while (!isAlphabetical(newFirstName))
	{
		std::cout << "First name should be alphabetical" << std::endl;
		std::cout << "Enter first name: ";
		std::cin >> newFirstName;
	}
	contacts[index].setFirstName(newFirstName);
	
	//setting last name
	std::cout << "Enter last name: ";
	std::cin >> newLastName;
	while (!isAlphabetical(newLastName))
	{
		std::cout << "Last name should be alphabetical" << std::endl;
		std::cout << "Enter last name: ";
		std::cin >> newLastName;
	}
	contacts[index].setLastName(newLastName);

	//setting nickname
	std::cout << "Enter nickname: ";
	std::cin >> newNickname;
	contacts[index].setNickname(newNickname);

	//setting phone number
	std::cout << "Enter phone number: ";
	std::cin >> newPhoneNumber;
	while (!isNumeric(newPhoneNumber))
	{
		std::cout << "Phone number should be numeric!" << std::endl;
		std::cout << "Enter phone number: ";
		std::cin >> newPhoneNumber;
	}
	contacts[index].setPhoneNumber(newPhoneNumber);

	//setting darkest secret
	std::cout << "Enter darkest secret: ";
	std::cin >> newSecret;
	while (!isAlphabetical(newSecret))
	{
		std::cout << "Darkest secret should be alphabetical" << std::endl;
		std::cout << "Enter darkest secret: ";
		std::cin >> newSecret;
	}
	contacts[index].setDarkestSecret(newSecret);
}

int	PhoneBook::addToPhoneBook(int index)
{
	if (index >= 8)
		index = 0;
	createContact(index);
	index++;
	return (index);
}

std::string	changeContact(std::string attribute)
{
	if (attribute.length() > 10)
	{
		int i = 0;
		for((void)i; i < 9; i++);
		attribute[i] = '.';
		i++;
		for((void)i; i <(int) attribute.length(); i++)
			attribute[i] = '\0';
	}
	else
	{
		while (attribute.length() < 10)
			attribute = " " + attribute;
	}
	return (attribute);
}

Contact	checkCharacters(Contact contact)
{
	std::string newFirstName = changeContact(contact.getFirstName());
	contact.setFirstName(newFirstName);

	std::string newLastName = changeContact(contact.getLastName());
	contact.setLastName(newLastName);

	std::string newNickname = changeContact(contact.getNickname());
	contact.setNickname(newNickname);

	return (contact);
}

void	printList()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index" << "|First Name" << "| Last Name" << "|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void	PhoneBook::printContact()
{
	int	contactNumber;
	std::cout << "Enter the number of the desired contact or 0 for the whole book: ";
	if (!(std::cin >> contactNumber) || contactNumber < 0||  contactNumber > 8)
	{
		std::cin.clear();
		while (std::cin.get() != '\n')
            continue;
		std::cout << "Index should be between 0 and 9" << std::endl;
		return ;
	}
	else if (contactNumber == 0)
	{
		printList();
		for (contactNumber = 1; contactNumber <= 8; contactNumber++)
		{
			contacts[contactNumber -1 ] = checkCharacters(contacts[contactNumber - 1]);
			std::cout << "|         " << contactNumber << "|" << contacts[contactNumber - 1].getFirstName() \
				<< "|" << contacts[contactNumber - 1].getLastName() << "|"  \
				<< contacts[contactNumber -1 ].getNickname() << "|" << std::endl;
		}
		std::cout << "---------------------------------------------" << std::endl;
	}
	else
	{
		contacts[contactNumber -1] = checkCharacters(contacts[contactNumber - 1]);
		printList();
		std::cout << "|         " << contactNumber << "|" << contacts[contactNumber - 1].getFirstName() \
			<< "|" << contacts[contactNumber -1].getLastName() << "|"  \
			<< contacts[contactNumber -1].getNickname() << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
}
