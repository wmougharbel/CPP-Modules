/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:05:53 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/12 15:07:59 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <string>
# include <algorithm>
# include <list>
# include <vector>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &copy);
		MutantStack	&operator=(const MutantStack &object);
		typedef typename	std::stack<T>::container_type::iterator			iterator;
		typedef typename	std::stack<T>::container_type::const_iterator	const_iterator;

		iterator	begin();
		iterator	end();
		const_iterator	begin() const;
		const_iterator	end() const;
};

# include "MutantStack.tpp"

#endif
