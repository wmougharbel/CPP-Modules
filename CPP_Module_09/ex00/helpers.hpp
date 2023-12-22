/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:39:01 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/17 13:44:21 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_HPP
# define HELPERS_HPP

# include "BitcoinExchange.hpp"

//check fdate
bool		checkDateFormat(std::string date);
bool		isLeapYear(std::string date);
bool		checkDayMonth(std::string date);
bool		checkDate(std::string date);
float		checkAndConvertValue(std::string value);
int			countPipes(std::string line);

//check value
bool		checkInputValue(float value);
bool		isValueDigit(std::string value);
std::string	trimSpaces(std::string date);


#endif
