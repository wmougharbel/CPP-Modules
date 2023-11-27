/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:27:52 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/27 10:34:08 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Undefined", 145, 137)
{
	std::cout << "Default Shrubbery constructor created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137) ,_target(target)
{
	std::cout << "Shrubbery custom constructor created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute())
{
	this->_target = copy._target;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm &object)
{
	if (this != &object)
		this->_target = object._target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::setTarget(std::string target)
{
	this->_target = target;
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream	output;
	
	output.open(_target + "_shrubbery");

	output << "Bureaucreat\n"
		   << "  ├── Form\n"
		   << "  │   ├── Shrubbery Creation Form\n"
		   << "  │   └── Shrubbery Creation Form\n"
		   << "  └── Form\n"
		   << "      ├── Shrubbery Creation Form\n"
		   << "      ├── Shrubbery Creation Form\n";

	output.close();
}

