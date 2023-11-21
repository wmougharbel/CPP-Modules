/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:34:04 by wmoughar          #+#    #+#             */
/*   Updated: 2023/10/16 16:34:04 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon		&_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
};