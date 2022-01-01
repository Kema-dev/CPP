/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:14:22 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/17 13:01:54 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Sample_RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src.getName(), src.getGradeSign(), src.getGradeExec())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	Form::operator=(rhs);
	this->_target = rhs._target;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	std::string	str;

	str = i.getSignature() ? "signed" : "not signed";
	o << i.getName() << ", form signature grade " << i.getGradeSign() << ", execution grade " << i.getGradeExec() << " which is " << str;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool	RobotomyRequestForm::execute(Bureaucrat const& executor) const
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
	std::cout << "BZZZZZZT BIZZZZZT! ";
	srand((unsigned int)time(NULL));
	if (rand() % 2 == 0)
		std::cout << "Robotomy on " << _target << " is successful!" << std::endl;
	else
		std::cout << "Robotomy on " << _target << " failed..." << std::endl;
	return (true);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */