/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:10:35 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/12 10:58:24 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <stdlib.h>
# include <climits>
# include "exceptions.hpp"

class Span
{
	private:
		Span();
		unsigned int		_size;
		unsigned int		_availableSpace;
		std::vector<int>	_numbers;

	public:
		Span(unsigned int N);
		Span(const Span &);
		Span	&operator=(const Span &);
		~Span();
		
		int				getNumber(int i) const;
		void			addNumber(int newNumber);
		int				shortestSpan();
		int				longestSpan();
		void			fillVector(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif
