/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:00:20 by wmoughar          #+#    #+#             */
/*   Updated: 2023/09/10 20:59:57 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01
#define EX01

#include <string>
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

//utils
bool	isAlphabetical(std::string str);
bool	isNumeric(std::string str);
void	exitProgram(std::string message);

//main
void	start();
void	resetContact(Contact toReset);

#endif