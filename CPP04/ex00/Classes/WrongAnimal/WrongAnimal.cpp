/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:08:46 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/04 20:02:48 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor called !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	*this = src;
	std::cout << "Copy constructor of " << src._type << " called !" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& src)
{
	*this = src;
	std::cout << "Copy constructor of " << src._type << " called !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << _type << " has been destructed forever !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal&				WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if ( this != &rhs )
		this->_type = rhs._type;
	std::cout << "Assignation operator of " << rhs._type << " called !" << std::endl;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		WrongAnimal::makeSound(void) const
{
	std::cout << this->_type << " emits a weird WrongAnimal sound !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	WrongAnimal::getType(void) const
{
	return(_type);
}

/* ************************************************************************** */