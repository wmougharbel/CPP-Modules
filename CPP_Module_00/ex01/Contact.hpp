/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:03:19 by wmoughar          #+#    #+#             */
/*   Updated: 2023/09/10 20:46:53 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
#define CONTACT_HPP

#include "ex01.hpp"

class	Contact
{
	private:
		std::string	firstName;
		std::string lastName;
		std::string	nickname;
		std::string darkestSecret;
		std::string	phoneNumber;

	public:
		Contact();
		~Contact();
		void		setFirstName(std::string fName);
		std::string	getFirstName();
		void		setLastName(std::string lName);
		std::string getLastName();
		void		setNickname(std::string nName);
		std::string getNickname();
		void		setDarkestSecret(std::string secret);
		std::string getDarkestSecret();
		void		setPhoneNumber(std::string pNumber);
		std::string			getPhoneNumber();
};

#endif