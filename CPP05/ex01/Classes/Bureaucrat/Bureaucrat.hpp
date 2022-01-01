/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 07:27:24 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/09 10:54:50 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
class Form;
# include "../Form/Form.hpp"

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string dname, int dgrade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		const std::string	getName(void) const;
		const int&			getGrade(void) const;
		void				promoteBureaucrat(void);
		void				demoteBureaucrat(void);
		void				signForm(Form& paper);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const std::string	info() const throw()
				{
					return ("Error: Bureaucrat grade too high!");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const std::string	info() const throw()
				{
					return ("Error: Bureaucrat grade too low!");
				}
		};
	private:
		std::string	_name;
		int			_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */