/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:10:44 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/08 10:34:09 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <exception>
# include <stdlib.h>

template <class T>
class Array
{
	private:
		T				*_elements;
		unsigned int	_size;

	public:
		Array() : _elements(NULL), _size(0)
		{
			
		}
		Array(unsigned int n) : _size(n)
		{
			_elements = new T[_size];
		}
		Array(const Array &copy)
		{
			this->_size = copy._size;
			this->_elements = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_elements[i] = copy._elements[i];
		}
		Array	&operator=(const Array &object)
		{
			if (this != &object)
			{
				this->_size = object._size;
				this->_elements = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_elements[i] = object._elements[i];
			}
			return (*this);
		}
		T	&operator[](unsigned int index) const
		{
			if (index >= _size)
				throw (std::exception());
			return (_elements[index]);
		}
		~Array()
		{
			delete[] _elements;
		}
		
		unsigned int size()
		{
			return (this->_size);
		}
};

#endif
