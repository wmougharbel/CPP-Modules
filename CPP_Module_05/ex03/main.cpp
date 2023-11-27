/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:51:38 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/27 12:43:13 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern	someRandomIntern;
	Form	*shrubbery = 0;
	Form	*pardon = 0;
	Form	*robotomy = 0;
	Form	*Huh = 0;
	
	try
	{

		shrubbery = someRandomIntern.makeForm("robotomy request", "Bender");
		pardon = someRandomIntern.makeForm("presidential pardon" , "Jorah");
		robotomy = someRandomIntern.makeForm("robotomy request", "Spock");
		Huh = someRandomIntern.makeForm("Something", "Broomstick");
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{		
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Form::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	delete (shrubbery);
	delete (pardon);
	delete (robotomy);
	delete (Huh);
}
