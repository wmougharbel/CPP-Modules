/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:49:26 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/11 13:07:14 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <exception>

class	ElementNotFoundException : public std::exception
{
	const char *what() const throw()
	{
		return ("Element not found in container");
	}
};

template <typename T>
void	easyfind(T container, int occurence)
{
	typename	T::iterator it;

	it = std::find(container.begin(), container.end(), occurence);
	if (it != container.end())
		std::cout << "Element found at position " << std::distance(container.begin(), it) << std::endl;
	else
		throw (ElementNotFoundException());
}

#endif
