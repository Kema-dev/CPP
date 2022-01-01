/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:40:58 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/17 15:44:11 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "../Form/Form.hpp"
# include "../ShrubberyCreationForm/ShrubberyCreationForm.hpp"
# include "../PresidentialPardonForm/PresidentialPardonForm.hpp"
# include "../RobotomyRequestForm/RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& src);
		~Intern();
		Intern &	operator=( Intern const & rhs );
		Form*		makeForm(std::string name, std::string target);
};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ****************************************************** INTERN_HPP */