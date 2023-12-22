/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:55:35 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/18 17:17:22 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//test with:
// 8 9 * 9 - 9 - 9 - 4 - 1 +
// 9 8 * 4 * 4 / 2 + 9 - 8 - 8 - 1 - 6 -
// 1 2 * 2 / 2 + 5 * 6 - 1 3 * - 4 5 * * 8 / 
// 8 4 * 6 / 2 3 * 5 - 7 + /
// 7 7 * 7 -
// 1 2 * 2 / 2 * 2 4 - +
// (1 + 1)

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw (Exception("Incorrect number of arguments!"));
		RPN	object(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}
