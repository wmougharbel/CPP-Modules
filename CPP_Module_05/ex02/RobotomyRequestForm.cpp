/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:58:10 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/27 13:25:23 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <unistd.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45), _target("undefined")
{
	std::cout << "Robotomy default constructor created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45), _target(target)
{
	std::cout << "Robotomy custom constructor created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute())
{
	this->_target = copy._target;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &object)
{
	if (this != &object)
		this->_target = object._target;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void	RobotomyRequestForm::setTarget(std::string target)
{
	this->_target = target;
}

void	RobotomyRequestForm::action() const
{
	std::cout << "...Drilling noises..." << std::endl;
	usleep(1000000);
	if (rand() % 2 == 0)
	{
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	}
	else
		std::cout << "Robotomy failed" << std::endl;
}
