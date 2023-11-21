/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:16:09 by wmoughar          #+#    #+#             */
/*   Updated: 2023/09/10 20:46:43 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

Contact::Contact(){};
Contact::~Contact(){};

void	Contact::setFirstName(std::string fName)
{
	firstName = fName;
}

std::string	Contact::getFirstName()
{
	return (firstName);
}

void	Contact::setLastName(std::string lName)
{
	lastName = lName;
}

std::string Contact::getLastName()
{
	return (lastName);
}

void	Contact::setNickname(std::string nName)
{
	nickname = nName;
}

std::string Contact::getNickname()
{
	return (nickname);
}

void	Contact::setDarkestSecret(std::string secret)
{
	darkestSecret = secret;
}

std::string	Contact::getDarkestSecret()
{
	return (darkestSecret);
}

void	Contact::setPhoneNumber(std::string pNumber)
{
	phoneNumber = pNumber;
}

std::string Contact::getPhoneNumber()
{
	return (phoneNumber);
}