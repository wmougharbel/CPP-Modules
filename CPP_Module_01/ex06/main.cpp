/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:01:21 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/02 15:38:43 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	harlFilterSwitch(std::string level, Harl &harl)
{
	int			i;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			break;
	}

	switch (i)
	{
		case 0:
			harl.complain("DEBUG");
		
		case 1:
			harl.complain("INFO");
		
		case 2:
			harl.complain("WARNING");
		
		case 3:
			harl.complain("ERROR");
			break;

		default:
			std::cout << "Invalid Input!" << std::endl;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Harl	harley;
		harlFilterSwitch(argv[1], harley);
	}
	else
	{
		std::cout << "Incorrect number of arguments!" << std::endl;
		return (1);
	}
	return (0);
}