/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:49:04 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/12 17:49:39 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		std::cout << "\n<<<<<<<<<<Simple Test>>>>>>>>>>" << std::endl;

		Span span(5);
		span.addNumber(-4);
		span.addNumber(-3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);
		for(int i = 0; i < 5; i++)
			std::cout << "index " << i << ": " << span.getNumber(i) << std::endl;
		std::cout << "\nLongest span: " << span.longestSpan() << std::endl;
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;

		std::cout << "\n<<<<<<<<<<Complex Test>>>>>>>>>>" << std::endl;
		
		Span sp(10000);
		std::vector<int>vec(10000);
		for (int i = 0; i < 10000; i++)
			vec[i] = i + 1;
		vec[0] = 473829;
		sp.fillVector(vec.begin() + 19, vec.end());
		for (int i = 0; i < 10; i++)
			std::cout << "index " << i << ": " << sp.getNumber(i) << std::endl;
		std::cout << "\nLongest span: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;

		std::cout << "\n<<<<<<<<<<Exception>>>>>>>>>>" << std::endl;
		span.addNumber(1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
