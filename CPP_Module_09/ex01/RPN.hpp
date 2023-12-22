/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:24:50 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/18 15:26:25 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <string>
# include <iostream>
# include <algorithm>
# include <exception>
# include <stack>
# include "Exception.hpp"
# include "helpers.hpp"

class RPN
{
	private:
		RPN();
		std::string			_notation;
		std::stack<int>		_equation;

	public:
		RPN(std::string notation);
		~RPN();
		RPN(const RPN &);
		RPN	&operator=(const RPN &);

		void	calculate(std::string notaion);
		void	checkInvalidNotation(std::string notation);
		void	storeInStack(int &a, int &b, char op);
};

# endif
