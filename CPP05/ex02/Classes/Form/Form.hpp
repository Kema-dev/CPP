/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 07:27:24 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/17 13:01:44 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
class Bureaucrat;
#include "../Bureaucrat/Bureaucrat.hpp"

class Form
{

	public:

		Form();
		Form(std::string dname, int dgradeSign, int dgradeExec);
		Form( const Form & src );
		~Form();

		Form &		operator=( Form const & rhs );

		virtual bool				beSigned(Bureaucrat& ppl);
		virtual std::string			getName(void) const;
		virtual int					getGradeSign(void) const;
		virtual int					getGradeExec(void) const;
		virtual bool				getSignature(void) const;

		virtual bool				execute(Bureaucrat const& executor) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const std::string	info() const throw()
				{
					return ("Error: Form grade too high!");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const std::string	info() const throw()
				{
					return ("Error: Form grade too low!");
				}
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const std::string	info() const throw()
				{
					return ("Error: Form is not signed!");
				}
		};
	private:
		const std::string	_name;
		const int			_gradeSign;
		const int			_gradeExec;
		bool				_signature;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ****************************************************** FORM_HPP */