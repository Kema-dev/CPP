/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:14:22 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 15:14:53 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Sample_ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src.getName(), src.getGradeSign(), src.getGradeExec())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	Form::operator=(rhs);
	this->_target = rhs._target;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	std::string	str;

	str = i.getSignature() ? "signed" : "not signed";
	o << i.getName() << ", form signature grade " << i.getGradeSign() << ", execution grade " << i.getGradeExec() << " which is " << str;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
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
	std::ofstream outfile (this->_target + "_shrubbery");
	outfile << "                                                         .\n                                              .         ;  \n                 .              .              ;%     ;;   \n                   ,           ,                :;%  %;   \n                    :         ;                   :;%;'     .,   \n           ,.        %;     %;            ;        %;'    ,;\n             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n               ;%;      %;        ;%;        % ;%;  ,%;'\n                `%;.     ;%;     %;'         `;%%;.%;'\n                 `:;%.    ;%%. %@;        %; ;@%;%'\n                    `:%;.  :;bd%;          %;@%;'\n                      `@%:.  :;%.         ;@@%;'   \n                        `@%.  `;@%.      ;@@%;         \n                          `@%%. `@%%    ;@@%;        \n                            ;@%. :@%%  %@@%;       \n                              %@bd%%%bd%%:;     \n                                #@%%%%%:;;\n                                %@@%%%::;\n                                %@@@%(o);  . '         \n                                %@@@o%;:(.,'         \n                            `.. %@@@o%::;         \n                               `)@@@o%::;         \n                                %@@(o)::;        \n                               .%@@@@%::;         \n                               ;%@@@@%::;.          \n                              ;%@@@@%%:;;;. \n                          ...;%@@@@@%%:;;;;,..    Gilo97                \n" << std::endl;
	outfile.close();
	std::cout << "A tree has been created in " << _target << "." << std::endl;
	return (true);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */