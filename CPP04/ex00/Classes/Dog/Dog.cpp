/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:08:46 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/04 21:01:11 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Default Dog constructor called !" << std::endl;
}

Dog::Dog(const Dog& src)
{
	*this = src;
	std::cout << "Copy constructor of " << src._type << " called !" << std::endl;
}

Dog::Dog(Dog& src)
{
	*this = src;
	std::cout << "Copy constructor of " << src._type << " called !" << std::endl;
}

Dog&	Dog::operator=(Dog const &rhs)
{
	if ( this != &rhs )
		_type = rhs._type;
	std::cout << "Assignation operator of " << rhs._type << " called !" << std::endl;
	return *this;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << _type << " has been destructed forever !" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Dog::makeSound(void) const
{
	std::cout << _type << " says \"OUAF OUAF\" !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */