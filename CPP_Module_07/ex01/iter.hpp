/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:20:12 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/06 20:36:59 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template <typename T, typename F>
void	iter(T array[], unsigned int length, F f)
{
	if (array == NULL || f == NULL)
		return ;
	for (unsigned int i = 0; i < length; i++)
		f(array[i]);
}

#endif
