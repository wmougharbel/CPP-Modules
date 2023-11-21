/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:11:04 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/13 11:48:48 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const Animal &);
		Animal	&operator=(const Animal &);
		virtual ~Animal();
		void	setType(std::string);
		const std::string	getType() const;
		virtual void	makeSound() const;
};

#endif
