/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:14:22 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 15:04:59 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Sample_PresidentialPardonForm", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form(src.getName(), src.getGradeSign(), src.getGradeExec())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	Form::operator=(rhs);
	this->_target = rhs._target;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	std::string	str;

	str = i.getSignature() ? "signed" : "not signed";
	o << i.getName() << ", form signature grade " << i.getGradeSign() << ", execution grade " << i.getGradeExec() << " which is " << str;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	try {
		Form::execute(executor);
	}
	catch (Form::GradeTooLowException& e) {
		std::cout << executor << " cannot execute " << *this << " because Bureaucrat's grade (" << executor.getGrade() <<") is too Low." << std::endl;
		return false;
	}
	catch (Form::FormNotSignedException& e) {
		std::cout << executor << " cannot execute " << *this << " because the form is not signed." << std::endl;
		return false;
	}
	std::cout << this->_target << " has been pardonned by 'Les Gilets Jaunes'." << std::endl;
	return (true);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */