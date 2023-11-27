/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoughar <wmoughar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:23:57 by wmoughar          #+#    #+#             */
/*   Updated: 2023/11/27 12:04:21 by wmoughar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class Form
{
	private:
		Form();
		const std::string	_name;
		bool				_FormIsSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
		virtual ~Form();
		Form(const Form &);
		Form	&operator=(const Form &);

		std::string	getName() const;
		bool		getFormStatus() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		
		void		setFormStatus(bool status);
		void		beSigned(Bureaucrat &b);
		virtual void	action() const;
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

std::ostream	&operator<<(std::ofstream &output, const Form &object);

#endif
