/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:55:51 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/22 17:54:13 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor " << _name << " created" << std::endl;
	setGrade(grade);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << _name << " destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	this->_grade = copy._grade;
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &object)
{
	if (this != &object)
		this->_grade = object._grade;
	std::cout << "Bureaucrat copy assignment overload called" << std::endl;
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &object)
{
	output << object.getName() << ", bureaucrat grade " << object.getGrade() << ".";
	return (output);
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

void		Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	std::cout << "Grade set to: " << this->_grade << std::endl;
}

void		Bureaucrat::incrementGrade()
{
	if(_grade < 1)
		throw GradeTooLowException();
	_grade--;
	std::cout << "Grade incremented to: " << this->_grade << std::endl;
}

void		Bureaucrat::decrementGrade()
{
	if(_grade >= 150)
		throw GradeTooLowException();
	_grade++;
	std::cout << "Grade decremented to: " << this->_grade << std::endl;
}

void	Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch(const Form::GradeTooLowException &e)
	{
		std::cerr << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
	catch(const Form::GradeTooHighException &e)
	{
		std::cerr << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
	
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too High! It should be between 0 and 150");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too Low! It should be between 0 and 150");
}
