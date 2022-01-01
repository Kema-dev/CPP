/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:14:22 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/17 13:01:40 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "../Bureaucrat/Bureaucrat.hpp"
# include "../Form/Form.hpp"

class RobotomyRequestForm : virtual public Form
{

	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		bool	virtual execute(Bureaucrat const& executor) const;

	protected:
		std::string _target;
};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ******************************************* ROBOTOMYREQUESTFORM_HPP */