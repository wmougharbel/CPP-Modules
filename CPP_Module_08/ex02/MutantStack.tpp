/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:20:51 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/12 14:38:45 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <class T>
MutantStack<T>::MutantStack() : std::stack<T>(){}

template <class T>
MutantStack<T>::~MutantStack(){}

template <class T>
MutantStack<T>::MutantStack(const MutantStack &copy) : std::stack<T>(copy){}

template <class T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &object)
{
	if (this != &object)
		std::stack<T>::operator=(object);
	return (*this);
}

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

template <class T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin() const
{
	return (std::stack<T>::c.begin());
}

template <class T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const
{
	return (std::stack<T>::c.end());
}
