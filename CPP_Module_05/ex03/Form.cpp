/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:47:17 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/27 12:38:01 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Form"), _FormIsSigned(false), _gradeToSign(75), _gradeToExecute(50)
{
	std::cout << "Form constructor created" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "Form custom constructor called" << std::endl ;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form::Form(const Form &copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
	this->_FormIsSigned = copy._FormIsSigned;
}

Form	&Form::operator=(const Form &object)
{
	if (this != &object)
		this->_FormIsSigned = object._FormIsSigned;
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Form &object)
{
	output << object.getName() << "'s status is " << object.getFormStatus() << "with the grade to sign " << object.getGradeToSign() << " and grade to execute " << object.getGradeToExecute() << ".";
	return (output);
}

std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getFormStatus() const
{
	return (_FormIsSigned);
}

int	Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void	Form::setFormStatus(bool status)
{
	this->_FormIsSigned = status;
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->_gradeToSign)
	{
		setFormStatus(true);
		std::cout << b.getName() << "'s Form was signed" << std::endl;
	}
	else if (b.getGrade() < 1)
		throw GradeTooHighException();
	else
		throw GradeTooLowException();
}

void	Form::action() const
{
	std::cout << "Do nothing" << std::endl;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high to sign the Form");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low to sign the Form");
}
