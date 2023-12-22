/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:24:06 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/21 15:54:23 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(char **argv) : _argv(argv){}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &object)
{
	if (this != &object)
		*this = object;
	return (*this);
}

PmergeMe::~PmergeMe(){}

bool	ascendingSort(std::pair<int, int> a, std::pair<int, int> b)
{
	return (a.second < b.second);
}

void	PmergeMe::printContainer()
{
	for (int i = 1; _argv[i]; i++)
		std::cout << _argv[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::printDequeAfter()
{
	for (std::deque<int>::iterator it = _largerDeque.begin(); it != _largerDeque.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::groupDequeInPairs()
{
	int i = 1;
	_lastNumber = 0;
	while (_argv[i])
	{
		if (_argv[i] && _argv[i + 1])
		{
			if (std::atoi(_argv[i]) <= 0 || std::atoi(_argv[i + 1]) <= 0)
				throw (Exception("A non positive number was found!"));
			std::pair<int, int>	_pair(std::atoi(_argv[i]), std::atoi(_argv[i + 1]));
			_deque.push_back(_pair);
			i += 2;
		}
		else
		{
			if (_argv[i] && std::atoi(_argv[i]) <= 0)
				throw (Exception("A non positive number was found!"));
			_lastNumber = std::atoi(_argv[i]);
			i++;
		}
	}
}

void	PmergeMe::mergeSortDequePairs(std::deque< std::pair<int, int> >::iterator begin, std::deque< std::pair<int, int> >::iterator end)
{
	if (std::distance(begin, end) > 1)
	{
		std::deque< std::pair<int, int> >::iterator	mid = begin + std::distance(begin, end) / 2;

		mergeSortDequePairs(begin, mid);
		mergeSortDequePairs(mid, end);
		
		std::inplace_merge(begin, mid, end, ascendingSort);
	}
}

void	PmergeMe::mergeSortDeque()
{
	for (std::deque< std::pair<int, int> >::iterator it = _deque.begin(); it != _deque.end(); it++)
	{
		if (it->first > it->second)
		{
			int	tmp = it->first;
			it->first = it->second;
			it->second = tmp;
		}
	}
	mergeSortDequePairs(_deque.begin(), _deque.end());
}

void	PmergeMe::splitDequePairs()
{
	std::deque< std::pair<int, int> >::iterator	it;
	std::deque<int>::iterator	it2;
	for (it = _deque.begin(); it != _deque.end(); it++)
	{
		_smallerDeque.push_back(it->first);
		_largerDeque.push_back(it->second);
	}
	_largerDeque.push_front(*_smallerDeque.begin());
	dequeBinarySearchInsert();
}

void	PmergeMe::dequeBinarySearchInsert()
{
	std::deque<int>::iterator	it;
	std::deque<int>::iterator	it2;

	for (it2 = _smallerDeque.begin() + 1; it2 != _smallerDeque.end(); it2++)
	{
		it = std::lower_bound(_largerDeque.begin(), _largerDeque.end(), *it2);
		_largerDeque.insert(it, *it2);
	}
	if (_lastNumber != 0)
	{
		it = lower_bound(_largerDeque.begin(), _largerDeque.end(), _lastNumber);
		_largerDeque.insert(it, _lastNumber);
	}
}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

void	PmergeMe::printListAfter()
{
	for (std::list<int>::iterator it = _largerList.begin(); it != _largerList.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::groupListInPairs()
{
	int i = 1;
	_lastNumber = 0;
	while (_argv[i])
	{
		if (_argv[i] && _argv[i + 1])
		{
			if (std::atoi(_argv[i]) <= 0 || std::atoi(_argv[i + 1]) <= 0)
				throw (Exception("A non positive number was found!"));
			std::pair<int, int>	_pair(std::atoi(_argv[i]), std::atoi(_argv[i + 1]));
			_list.push_back(_pair);
			i += 2;
		}
		else
		{
			if (std::atoi(_argv[i]) <= 0)
				throw (Exception("A non positive number was found!"));
			_lastNumber = std::atoi(_argv[i]);
			i++;
		}
	}
}

void	PmergeMe::mergeSortListPairs(std::list< std::pair<int, int> >::iterator begin, std::list< std::pair<int, int> >::iterator end)
{
	if (std::distance(begin, end) > 1)
	{
		std::list< std::pair<int, int> >::iterator	mid = begin;
		std::advance(mid, std::distance(begin, end) / 2);

		mergeSortListPairs(begin, mid);
		mergeSortListPairs(mid, end);
		
		std::inplace_merge(begin, mid, end, ascendingSort);
	}
}

void	PmergeMe::mergeSortList()
{
	for (std::list < std::pair<int, int> >::iterator it = _list.begin(); it != _list.end(); it++)
	{
		if (it->first > it->second)
		{
			int	tmp = it->first;
			it->first = it->second;
			it->second = tmp;
		}
	}
	mergeSortListPairs(_list.begin(), _list.end());
}

void	PmergeMe::splitListPairs()
{
	std::list< std::pair<int, int> >::iterator	it;
	std::list<int>::iterator	it2;
	for (it = _list.begin(); it != _list.end(); it++)
	{
		_smallerList.push_back(it->first);
		_largerList.push_back(it->second);
	}
	_largerList.push_front(*_smallerList.begin());
	listBinarySearchInsert();
}

void	PmergeMe::listBinarySearchInsert()
{
	std::list<int>::iterator	it;
	std::list<int>::iterator	it2 = _smallerList.begin();

	for (it2 = ++_smallerList.begin(); it2 != _smallerList.end(); ++it2)
	{
		it = std::lower_bound(_largerList.begin(), _largerList.end(), *it2);
		_largerList.insert(it, *it2);
	}
	if (_lastNumber != 0)
	{
		it = std::lower_bound(_largerList.begin(), _largerList.end(), _lastNumber);
		_largerList.insert(it, _lastNumber);
	}
}
