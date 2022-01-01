/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 07:27:23 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/09 11:04:51 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string dname, int dgrade)
{
	_name = dname;
	if (dgrade < 1)
		throw(GradeTooHighException());
	else if (dgrade > 150)
		throw(GradeTooLowException());
	else
		_grade = dgrade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	this->_name = src._name;
	this->_grade = src._grade;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

const int&	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::promoteBureaucrat(void)
{
	if (this->getGrade() < 2)
		throw(GradeTooHighException());
	else if (this->getGrade() > 150)
		throw(GradeTooLowException());
	else
		this->_grade--;
}

void	Bureaucrat::demoteBureaucrat(void)
{
	if (this->getGrade() < 1)
		throw(GradeTooHighException());
	else if (this->getGrade() > 149)
		throw(GradeTooLowException());
	else
		this->_grade++;
}

void	Bureaucrat::signForm(Form& paper)
{
	try {
		paper.beSigned(*this);
	}
	catch (Form::GradeTooHighException) {
		std::cout << *this << " cannot sign " << paper << " because Bureaucrat's grade is too High." << std::endl;
		return ;
	}
	catch (Form::GradeTooLowException) {
		std::cout << *this << " cannot sign " << paper << " because Bureaucrat's grade is too Low." << std::endl;
		return ;
	}
	std::cout << *this << " signs " << paper << "." << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */