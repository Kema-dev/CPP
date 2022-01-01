/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:40:48 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 15:35:50 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	(void)i;
	o << "Intern";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form*	createPresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*	createShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	createRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

// ? void (*functptr[])() = { test1, test2, test3 } ;


Form*	Intern::makeForm(std::string name, std::string target)
{
	std::string	cmp[] = {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm"};
	Form* (*function[])(std::string target) = {&createPresidentialPardonForm, &createShrubberyCreationForm, &createRobotomyRequestForm};
	int	i = -1;
	while (++i < 3) if (name == cmp[i]) break ;
	if (i >= 3)
	{
		std::cerr << name << " : Unknown Form type!" << std::endl;
		return (NULL);
	}
	std::cout << "Form created !" << std::endl;
	return (function[i](target));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */