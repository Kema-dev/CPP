/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:57:51 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 12:09:03 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Classes/Bureaucrat/Bureaucrat.hpp"
#include <unistd.h>

int main()
{
	Bureaucrat*	b1;
	Bureaucrat*	b2;
	Bureaucrat*	b3;
	Bureaucrat*	b4;
	Bureaucrat*	b5;
	Bureaucrat*	b6;
	try {
		b1 = new Bureaucrat("Mini", 1);
	}
	catch (std::exception& e) {
		std::cerr << "There is an Error! : 1" << std::endl;
	}
	try {
		b2 = new Bureaucrat("Max", 150);}
	catch (std::exception& e) {
		std::cerr << "There is an Error! : 150" << std::endl;
	}
	try {
		b3 = new Bureaucrat("LowE", 0);}
	catch (std::exception& e) {
		std::cerr << "There is an Error! : 0" << std::endl;
	}
	try {
		b4 = new Bureaucrat("HighE", 151);}
	catch (std::exception& e) {
		std::cerr << "There is an Error! : 151" << std::endl;
	}

	try {
		b1->promoteBureaucrat();}
	catch (std::exception& e) {
		std::cerr << "There is an Error! : promote 1" << std::endl;
	}
	try {
		b2->demoteBureaucrat();}
	catch (std::exception& e) {
		std::cerr << "There is an Error! : demote 150" << std::endl;
	}

	try {
		b5 = new Bureaucrat("LowE", 0);}
	catch (GradeTooHighException& e) {
		std::cerr << e.info() << " : 0" << std::endl;
	}
	try {
		b6 = new Bureaucrat("HighE", 151);}
	catch (GradeTooLowException& e) {
		std::cerr << e.info() << " : 151" << std::endl;
	}
	try {
		b1->promoteBureaucrat();}
	catch (GradeTooHighException& e) {
		std::cerr << e.info() << " : promote 1" << std::endl;
	}
	try {
		b2->demoteBureaucrat();}
	catch (GradeTooLowException& e) {
		std::cerr << e.info() << " : demote 150" << std::endl;
	}

	std::cout << *b1;
	std::cout << *b2;

	return 0;
}
