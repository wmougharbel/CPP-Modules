/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:47:17 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/22 17:52:57 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("AForm"), _AFormIsSigned(false), _gradeToSign(75), _gradeToExecute(50)
{
	std::cout << "AForm constructor created" << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "AForm custom constructor called" << std::endl ;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(const AForm &copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
	this->_AFormIsSigned = copy._AFormIsSigned;
}

AForm	&AForm::operator=(const AForm &object)
{
	if (this != &object)
		this->_AFormIsSigned = object._AFormIsSigned;
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const AForm &object)
{
	output << object.getName() << "'s status is " << object.getAFormStatus() << "with the grade to sign " << object.getGradeToSign() << " and grade to execute " << object.getGradeToExecute() << ".";
	return (output);
}

std::string	AForm::getName() const
{
	return (_name);
}

bool	AForm::getAFormStatus() const
{
	return (_AFormIsSigned);
}

int	AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void	AForm::setAFormStatus(bool status)
{
	this->_AFormIsSigned = status;
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->_gradeToSign)
	{
		setAFormStatus(true);
		std::cout << b.getName() << "'s AForm was signed" << std::endl;
	}
	else if (b.getGrade() < 1)
		throw GradeTooHighException();
	else
		throw GradeTooLowException();
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToSign() || executor.getGrade() > this->getGradeToExecute())
		throw	AForm::GradeTooLowException();
	else
		action();
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high to sign the AForm");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low to sign the AForm");
}
