/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:19:33 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/21 15:53:45 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <string>
# include <iostream>
# include <algorithm>
# include <exception>
# include <list>
# include <deque>
# include <iterator>
# include <ctime>
# include "Exception.hpp"

class PmergeMe
{
	private:
		PmergeMe();
		char								**_argv;
		int									_lastNumber;
		std::deque<std::pair<int, int> >	_deque;
		std::deque<int>						_smallerDeque;
		std::deque<int>						_largerDeque;
		std::list< std::pair<int, int> >	_list;
		std::list<int>						_smallerList;
		std::list<int>						_largerList;

	public:
		PmergeMe(char **argv);
		PmergeMe(const PmergeMe &);
		PmergeMe	&operator=(const PmergeMe &);
		~PmergeMe();


		void	groupDequeInPairs();
		void	mergeSortDequePairs(std::deque< std::pair<int, int> >::iterator begin, std::deque< std::pair<int, int> >::iterator end);
		void	mergeSortDeque();
		void	splitDequePairs();
		void	dequeBinarySearchInsert();
		void	printDequeAfter();

		void	groupListInPairs();
		void	mergeSortListPairs(std::list< std::pair<int, int> >::iterator begin, std::list< std::pair<int, int> >::iterator end);
		void	mergeSortList();
		void	splitListPairs();
		void	listBinarySearchInsert();
		void	printListAfter();

		void	sortContainers();
		void	printContainer();
};

#endif
