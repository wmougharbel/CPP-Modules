/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:23:57 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/22 17:51:40 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class AForm
{
	private:
		AForm();
		const std::string	_name;
		bool				_AFormIsSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		virtual ~AForm();
		AForm(const AForm &);
		AForm	&operator=(const AForm &);

		std::string	getName() const;
		bool		getAFormStatus() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		
		void		setAFormStatus(bool status);
		void		beSigned(Bureaucrat &b);
		virtual void	action() const = 0;
		void		execute(Bureaucrat const &executor) const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ofstream &output, const AForm &object);

#endif
