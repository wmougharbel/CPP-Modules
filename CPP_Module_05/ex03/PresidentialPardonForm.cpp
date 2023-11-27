/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:41:52 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/27 10:34:08 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", 25, 5), _target("undefined")
{
	std::cout << "Robotomy default constructor created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Robotomy", 25, 5), _target(target)
{
	std::cout << "Robotomy custom constructor created" << std::endl;
}
 
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Robotomy destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute())
{
	this->_target = copy._target;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &object)
{
	if (this != &object)
		this->_target = object._target;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void	PresidentialPardonForm::setTarget(std::string target)
{
	this->_target = target;
}

void	PresidentialPardonForm::action() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToSign() || executor.getGrade() > this->getGradeToExecute())
		throw	Form::GradeTooLowException();
	else
		action();
}
