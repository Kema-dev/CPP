/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:08:46 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/04 20:02:48 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : _type("Animal")
{
	std::cout << "Default Animal constructor called !" << std::endl;
}

Animal::Animal(const Animal& src)
{
	*this = src;
	std::cout << "Copy constructor of " << src._type << " called !" << std::endl;
}

Animal::Animal(Animal& src)
{
	*this = src;
	std::cout << "Copy constructor of " << src._type << " called !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << _type << " has been destructed forever !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal&				Animal::operator=(const Animal& rhs)
{
	if ( this != &rhs )
		_type = rhs._type;
	std::cout << "Assignation operator of " << rhs._type << " called !" << std::endl;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Animal::makeSound(void) const
{
	std::cout << _type << " emits a standard sound !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Animal::getType(void) const
{
	return(_type);
}

/* ************************************************************************** */