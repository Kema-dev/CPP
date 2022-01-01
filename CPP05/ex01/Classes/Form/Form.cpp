/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 08:41:10 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/09 10:58:49 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string dname, int dgradeSign, int dgradeExec) : _name(dname), _gradeSign(dgradeSign), _gradeExec(dgradeExec), _signature(false)
{
	if (dgradeSign < 1)
		throw(GradeTooHighException());
	else if (dgradeSign > 150)
		throw(GradeTooLowException());
	if (dgradeExec < 1)
		throw(GradeTooHighException());
	else if (dgradeExec > 150)
		throw(GradeTooLowException());
}

Form::Form( const Form & src ) : _name(src.getName()), _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec()), _signature(src.getSignature())
{
	if (src.getGradeSign() < 1)
		throw(GradeTooHighException());
	else if (src.getGradeSign() > 150)
		throw(GradeTooLowException());
	if (src.getGradeExec() < 1)
		throw(GradeTooHighException());
	else if (src.getGradeExec() > 150)
		throw(GradeTooLowException());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		const_cast<std::string&>(this->_name) = rhs.getName();
		const_cast<int&>(this->_gradeSign) = rhs.getGradeSign();
		const_cast<int&>(this->_gradeExec) = rhs.getGradeExec();
		const_cast<bool&>(this->_signature) = rhs.getSignature();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	std::string	str;

	str = i.getSignature() ? "signed" : "not signed";
	o << i.getName() << ", form signature grade " << i.getGradeSign() << ", execution grade " << i.getGradeExec() << " which is " << str;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool		Form::beSigned(Bureaucrat& ppl)
{

	if (ppl.getGrade() > this->getGradeSign())
	{
		throw (GradeTooLowException());
		return (false);
	}
	else
	{
		this->_signature = true;
		return (true);
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Form::getName(void) const
{
	return (_name);
}

int			Form::getGradeSign(void) const
{
	return (_gradeSign);
}

int			Form::getGradeExec(void) const
{
	return (_gradeExec);
}

bool		Form::getSignature(void) const
{
	return (_signature);
}


/* ************************************************************************** */