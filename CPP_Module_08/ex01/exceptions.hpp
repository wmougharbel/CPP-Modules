/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:54:54 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/12 10:58:35 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTIONS_HPP
# define EXCEPTIONS_HPP

#include <exception>

class VectorFullException : public std::exception
{
	const char	*what() const throw();
};

class TooFewNumbersException : public std::exception
{
	const char	*what() const throw();
};

#endif
