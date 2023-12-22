/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:29:14 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/21 15:54:02 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	PmergeMe::sortContainers()
{
	double	duration;
	
	std::cout << "Before: ";
	clock_t	start = clock();
	groupListInPairs();
	printContainer();
	mergeSortList();
	splitListPairs();
	clock_t	end = clock();
	std::cout <<"\n\nAfter: ";
	printListAfter();
	duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	std::cout << "\n\nBefore: ";
	start = clock();
	groupDequeInPairs();
	printContainer();
	mergeSortDeque();
	splitDequePairs();
	end = clock();
	std::cout <<"\n\nAfter: ";
	printDequeAfter();
	std::cout << std::endl;

	std::cout << "Time to process range of " << _largerList.size() << " elements with std::list: " << duration << "s" << std::endl;
	
	duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	std::cout << "Time to process range of " << _largerDeque.size() << " elements with std::deque: " << duration << "s" << std::endl;
}

int main(int argc, char **argv)
{
	try
	{
		if (argc < 2)
			throw (Exception("Incorrect number of arguments!"));
		PmergeMe	merge(argv);
		merge.sortContainers();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}	
}
