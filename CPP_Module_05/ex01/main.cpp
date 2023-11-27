/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:51:38 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/27 13:17:38 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	b1("John", 70);
	Bureaucrat	b2("Albert", 10);
	Bureaucrat	b3("Robert", 1);
	Bureaucrat	b4("Thomas", 100);
	Form		toSign("Form", 75, 50);

	try
	{
		b1.signForm(toSign);
	}
	catch(const Form::GradeTooHighException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		b2.signForm(toSign);
	}
	catch(const Form::GradeTooHighException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		b3.signForm(toSign);
	}
	catch(const Form::GradeTooHighException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		b4.signForm(toSign);
	}
	catch(const Form::GradeTooHighException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form newForm("New Form", 1, 151);
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
