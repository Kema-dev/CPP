/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 07:27:24 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/09 10:54:53 by jjourdan         ###   ########lyon.fr   */
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

		bool				beSigned(Bureaucrat& ppl);
		std::string			getName(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;
		bool				getSignature(void) const;

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
	private:
		const std::string	_name;
		const int			_gradeSign;
		const int			_gradeExec;
		bool				_signature;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ****************************************************** FORM_HPP */