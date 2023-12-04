/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:55:19 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/03 17:17:54 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

int main()
{
	std::cout << "<<<<<<<<<<Test 1>>>>>>>>>>" << std::endl;
	Base	*base =generate();
	std::cout << "<<<<<POINTER>>>>>" << std::endl;
	identify(*base);
	std::cout << "<<<<<REFERENCE>>>>>" << std::endl;
	identify(base);
	delete(base);
	
	std::cout << "<<<<<<<<<<Test 2>>>>>>>>>>" << std::endl;
	base = generate();
	std::cout << "<<<<<POINTER>>>>>" << std::endl;
	identify(*base);
	std::cout << "<<<<<REFERENCE>>>>>" << std::endl;
	identify(base);
	delete(base);

	std::cout << "<<<<<<<<<<Test 3>>>>>>>>>>" << std::endl;
	base = generate();
	std::cout << "<<<<<POINTER>>>>>" << std::endl;
	identify(*base);
	std::cout << "<<<<<REFERENCE>>>>>" << std::endl;
	identify(base);
	delete(base);

	std::cout << "<<<<<<<<<<Test 4>>>>>>>>>>" << std::endl;
	base = generate();
	std::cout << "<<<<<POINTER>>>>>" << std::endl;
	identify(*base);
	std::cout << "<<<<<REFERENCE>>>>>" << std::endl;
	identify(base);

	delete(base);
}
