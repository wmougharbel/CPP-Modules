/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertUtils.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:54:19 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/03 15:26:32 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTUTILS_HPP
# define CONVERTUTILS_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <float.h>
# include <cmath>

// class	EmptyStringException : public std::exception
// {
// 	public:
// 		const char	*what() const throw();
// };

bool	isInteger(const std::string &argument);
bool	isChar(const std::string &argument);
bool	isFloat(const std::string &argument);
bool	isDouble(const std::string &argument);
bool	isPseudoLiteral(const std::string &argument);
int		checkVariableType(const std::string &argument);

void	convertInt(const std::string &argument);
void	convertChar(const std::string &argument);
void	convertFloat(const std::string &argument);
void	convertDouble(const std::string &argument);
void	convertPseudoLiterals(const std::string &argument);

#endif
