/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:57:51 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/09 11:07:51 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Classes/Bureaucrat/Bureaucrat.hpp"
#include "Classes/Form/Form.hpp"
#include <unistd.h>

int main()
{
	Bureaucrat	*b1 = new Bureaucrat("Employee", 140);
	Bureaucrat	*b2 = new Bureaucrat("Macron", 1);
	Form		*f1 = new Form("Work", 140, 140);
	Form		*f2 = new Form("49.3", 3, 10);
	try {
		Form		*f3 = new Form("Lower", -1, 140);
		(void)f3;}
	catch (Form::GradeTooHighException& e) {
		std::cerr << "f3:" << e.info() << std::endl;
	}
	try {
		Form		*f4 = new Form("Higher", 3, 160);
		(void)f4;}
	catch (Form::GradeTooLowException& e) {
		std::cerr << "f4:" << e.info() << std::endl;
	}
	b1->signForm(*f1);
	b1->signForm(*f2);
	b2->signForm(*f1);
	b2->signForm(*f2);
	return 0;
}
