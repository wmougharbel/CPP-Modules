/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:51:38 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/27 10:26:51 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <memory>

int main()
{
	AForm	*shrubbery = 0;
	AForm	*pardon = 0;
	AForm	*robotomy = 0;
	
	try
	{
		Bureaucrat	bob("Bob", 100);
		Bureaucrat	john("John", 10);
		Bureaucrat	bill("Bill", 1);

		shrubbery = new ShrubberyCreationForm("Home");
		pardon = new PresidentialPardonForm("Clinton");
		robotomy = new RobotomyRequestForm("Spock");

		std::cout << bob << std::endl;
		bob.signForm(*shrubbery);
		bob.executeForm(*shrubbery);

		std::cout << john << std::endl;
		john.signForm(*robotomy);
		john.executeForm(*robotomy);

		std::cout << bill << std::endl;
		bill.signForm(*pardon);
		bill.executeForm(*pardon);

		bob.executeForm(*pardon);

	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{		
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const AForm::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	delete (shrubbery);
	delete (pardon);
	delete (robotomy);
}
