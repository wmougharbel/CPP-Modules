/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:07:56 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/10 14:18:54 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
	protected:
		std::string			_name;
		unsigned int		_hitPoints;
		unsigned int		_energyPoints;
		unsigned int		_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string);
		ClapTrap(const ClapTrap &);
		ClapTrap	&operator=(const ClapTrap &);
		virtual ~ClapTrap();
		std::string	getName();
		void	setAttackDamage(unsigned int damage);
		unsigned int	getAttackDamage();
		virtual void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
