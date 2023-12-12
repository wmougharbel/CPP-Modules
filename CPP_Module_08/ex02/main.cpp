/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:14:49 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/12 15:06:08 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "<<<<<<<<<<MutantStack>>>>>>>>>>" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "\nConstant Iterator: " << std::endl;
	MutantStack<int>::const_iterator constIt = mstack.begin();
	MutantStack<int>::const_iterator constItEnd = mstack.end();
	while (constIt != constItEnd)
	{
		std::cout << "Value: " << *constIt << std::endl;
		++constIt;
	}
	
	std::cout << "\nNormal Iterator: " << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		*it = 100;
		std::cout << "Value: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\n<<<<<<<<<<List>>>>>>>>>>" << std::endl;

	std::list<int> myList;
	myList.push_back(5);
	myList.push_back(17);
	std::cout << "Front: " << myList.front() << std::endl;
	std::cout << "Size: " << myList.size() << std::endl;
	myList.pop_front();
	std::cout << "Front: " << myList.front() << std::endl;
	std::cout << "Size: " << myList.size() << std::endl;
	myList.push_back(3);
	myList.push_back(5);
	myList.push_back(737);
	myList.push_back(0);

	std::cout << "\nConstant Iterator: " << std::endl;
	std::list<int>::const_iterator constListIterator = myList.begin();
	std::list<int>::const_iterator constListIteratorEnd = myList.end();
	while (constListIterator != constListIteratorEnd)
	{
		std::cout << "Value: " << *constListIterator << std::endl;
		++constListIterator;
	}

	std::cout << "\nNormal Iterator: " << std::endl;
	std::list<int>::iterator listIterator = myList.begin();
	std::list<int>::iterator listIteratorEnd = myList.end();
	while (listIterator != listIteratorEnd)
	{
		*listIterator = 100;
		std::cout << "Value: " << *listIterator << std::endl;
		++listIterator;
	}

	std::cout << "\n<<<<<<<<<<Vector>>>>>>>>>>" << std::endl;
	
	std::vector<int> myVector;
	myVector.push_back(5);
	myVector.push_back(17);
	std::cout << "Front: " << myVector.front() << std::endl;
	std::cout << "Size: " << myVector.size() << std::endl;
	myVector.pop_back();
	std::cout << "New Front: " << myVector.front() << std::endl;
	std::cout << "Size: " << myVector.size() << std::endl;
	myVector.push_back(3);
	myVector.push_back(5);
	myVector.push_back(737);
	myVector.push_back(0);

	std::cout << "\nConstant Iterator: " << std::endl;
	std::vector<int>::const_iterator constVectorIterator = myVector.begin();
	std::vector<int>::const_iterator constVectorIteratorEnd = myVector.end();
	while (constVectorIterator != constVectorIteratorEnd)
	{
		std::cout << "Value: " << *constVectorIterator << std::endl;
		++constVectorIterator;
	}

	std::cout << "\nNormal Iterator: " << std::endl;
	std::vector<int>::iterator vectorIterator = myVector.begin();
	std::vector<int>::iterator vectorIteratorEnd = myVector.end();
	while (vectorIterator != vectorIteratorEnd)
	{
		*vectorIterator = 100;
		std::cout << "Value: " << *vectorIterator << std::endl;
		++vectorIterator;
	}
	return (0);
}
