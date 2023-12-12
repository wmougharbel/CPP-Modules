/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:38:16 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/11 12:09:35 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::vector<int> myVector;
	std::list<int> myList;
	std::deque<int> myQueue;

	for (int i = 1; i <= 5; i++)
		myVector.push_back(i);

	for (int i = 1; i <= 5; i++)
		myList.push_front(i);

	for (int i = 1; i <= 5; i++)
		myQueue.push_back(i);

	try
	{
		std::cout << "<<<<<<<<<Vector>>>>>>>>>" << std::endl;
		for (int i = 1; i < 6; i++)
			easyfind(myVector, i);

		std::cout << "\n<<<<<<<<<<List>>>>>>>>>" << std::endl;
		for (int i = 1; i < 6; i++)
			easyfind(myList, i);

		std::cout << "\n<<<<<<<<<<Deque>>>>>>>>>" << std::endl;
		for (int i = 1; i < 6; i++)
			easyfind(myQueue, i);

		std::cout << "\n<<<<<<<<<<Exception>>>>>>>>>" << std::endl;
		easyfind(myVector, 10);

		std::cout << "This will not execute" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
