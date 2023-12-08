/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:26:38 by wmoughar          #+#    #+#             */
/*   Updated: 2023/12/05 16:06:23 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <whatever.hpp>

int main()
{
	int a = 2;
	int b = 3;

	std::cout << "\n\n<<<<<<<<<<Integer Test>>>>>>>>>>>\n\n";

	::swap( a, b );
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::cout << "\n\n<<<<<<<<<<String Test>>>>>>>>>>>\n\n";
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	std::cout << "\n\n<<<<<<<<<<Char Test>>>>>>>>>>>\n\n";
	
	char e = '*';
	char f = '&';
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	
	std::cout << "\n\n<<<<<<<<<<Pointer Test>>>>>>>>>>\n\n";

	const void	*addressC = static_cast<const void *>(&c);
	const void	*addressD = static_cast<const void *>(&d);
	::swap(addressC, addressD);
	std::cout << "addressC = " << addressC << ", addressD = " << addressD << std::endl;
	std::cout << "min( addressC, addressD ) = " << ::min( addressC, addressD ) << std::endl;
	std::cout << "max( addressC, addressD ) = " << ::max( addressC, addressD ) << "\n" << std::endl;
	
	return 0;
}
