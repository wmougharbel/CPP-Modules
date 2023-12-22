/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:11:46 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/18 14:48:34 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_HPP
# define HELPERS_HPP

# include "RPN.hpp"

bool	isOperator(char c);
bool	isNumeric(std::string notation);
bool	consecutiveDigits(std::string notation);

#endif
