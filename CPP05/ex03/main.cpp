/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:57:51 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 15:37:22 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Classes/Bureaucrat/Bureaucrat.hpp"
#include "Classes/Form/Form.hpp"
#include "Classes/ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "Classes/PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "Classes/RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "Classes/Intern/Intern.hpp"
#include <unistd.h>

int main()
{
	Bureaucrat	*b1 = new Bureaucrat("Macron", 1);
	Intern		*i1 = new Intern();

	Form		*f2 = i1->makeForm("Redistribuer l'argent", "Castex le bg");
	(void)f2;
	Form		*f1 = i1->makeForm("PresidentialPardonForm", "Castex le bg");
	b1->executeForm(*f1);
	b1->signForm(*f1);
	b1->executeForm(*f1);
	return 0;
}
