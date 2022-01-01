/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:29:49 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/06 21:06:08 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice()
{
	_type = "ice";
	std::cout << "Default Ice constructor called !" << std::endl;
}

Ice::Ice(const Ice& src)
{
	*this = src;
	std::cout << "Copy constructor of Ice called !" << std::endl;
}

Ice::Ice(Ice& src)
{
	*this = src;
	std::cout << "Copy constructor of Ice called !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria*	Ice::clone(void) const
{
	AMateria*	ret = NULL;

	if (_type == "ice")
		ret = new Ice;
	else
		std::cout << "WTF IS THIS TYPE ?! I NEED AN ICE !" << std::endl;
	return (ret);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */