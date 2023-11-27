/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:38:56 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/27 12:45:01 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor created" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern	&Intern::operator=(const Intern &object)
{
	if (this != &object){}
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	int			i;
	Form		*form = NULL;
	std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (i = 0; i < 3; i++)
		if (name.compare(forms[i]) == 0)
			break;
	
	switch (i)
	{
	case 0:
		form = new ShrubberyCreationForm(target);
		break;
	
	case 1:
		form = new RobotomyRequestForm(target);
		break;

	case 2:
		form = new PresidentialPardonForm(target);
		break;
		
	default:
		break;
	}
	
	if (i >= 3)
		std::cout << "Intern didn't find a form to create" << std::endl;
	else
		std::cout << "Intern creates " << forms[i] << std::endl;
	return (form);
}
