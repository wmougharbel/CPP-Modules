/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:12:31 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/15 11:06:20 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_memory[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &);
		MateriaSource	&operator=(const MateriaSource &);
		~MateriaSource();
		void	learnMateria(AMateria *);
		AMateria	*createMateria(std::string const &type);
};

#endif
