/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:15:18 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/18 10:00:35 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
# define EXCEPTION_HPP

# include "RPN.hpp"

class	Exception : public std::exception
{
	private:
		std::string	_message;

	public:
		Exception(const char *message);
		~Exception() throw();
		const char	*what() const throw();
};

#endif
