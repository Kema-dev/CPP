/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:14:22 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/17 13:06:14 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "../Bureaucrat/Bureaucrat.hpp"
# include "../Form/Form.hpp"

class PresidentialPardonForm : virtual public Form
{

	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		bool	virtual execute(Bureaucrat const& executor) const;

	protected:
		std::string _target;
};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ******************************************* PRESIDENTIALPARDONFORM_HPP */