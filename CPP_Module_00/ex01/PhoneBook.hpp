/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:02:40 by wmoughar          #+#    #+#             */
/*   Updated: 2023/09/11 13:48:34 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "ex01.hpp"

// Contact::Contact(){};

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		Contact contacts[8];
		void	createContact(int index);		
		int		addToPhoneBook(int index);
		void	printContact();
};

#endif