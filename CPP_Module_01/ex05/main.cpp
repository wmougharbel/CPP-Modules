/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:01:21 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/02 18:14:18 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harley;
	harley.complain("DEBUG");
	harley.complain("INFO");
	harley.complain("WARNING");
	harley.complain("ERROR");
	harley.complain("something");
}