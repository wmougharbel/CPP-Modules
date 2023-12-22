/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:34:20 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/15 13:21:21 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <algorithm>
# include <exception>
# include <iostream>
# include <fstream>
# include <map>
# include <string>
# include <sstream>
# include "Exception.hpp"
# include "helpers.hpp"

class BitcoinExchange
{
	private:
		BitcoinExchange();
		std::string					_file;
		std::map<std::string, float>_database;

	public:
		BitcoinExchange(std::string file);
		BitcoinExchange(const BitcoinExchange &);
		BitcoinExchange	&operator=(const BitcoinExchange &);
		~BitcoinExchange();

		void	storeDatabase();
		void	parseInputFile(std::ifstream &input);
		void	getFile();
};

#endif
