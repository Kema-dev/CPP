/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:57:51 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/17 14:39:53 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Classes/Bureaucrat/Bureaucrat.hpp"
#include "Classes/Form/Form.hpp"
#include "Classes/ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "Classes/PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "Classes/RobotomyRequestForm/RobotomyRequestForm.hpp"
#include <unistd.h>

int main()
{
	Bureaucrat	*b1 = new Bureaucrat("Employee", 150);
	Bureaucrat	*b2 = new Bureaucrat("Macron", 1);
	ShrubberyCreationForm	*f1 = new ShrubberyCreationForm("My forest");
	PresidentialPardonForm	*f2 = new PresidentialPardonForm("Castex le sang");
	RobotomyRequestForm		*f3 = new RobotomyRequestForm("La plebe");
	
	b1->signForm(*f1);
	b2->signForm(*f1);
	b2->signForm(*f2);
	b2->signForm(*f3);
	b1->executeForm(*f1);
	b2->executeForm(*f1);
	b2->executeForm(*f2);
	b2->executeForm(*f3);
	return 0;
}
