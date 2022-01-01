/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:29:49 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/06 21:06:18 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
{
	_type = "cure";
	std::cout << "Default Cure constructor called !" << std::endl;
}

Cure::Cure(const Cure& src)
{
	*this = src;
	std::cout << "Copy constructor of Cure called !" << std::endl;
}

Cure::Cure(Cure& src)
{
	*this = src;
	std::cout << "Copy constructor of Cure called !" << std::endl;
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

AMateria*	Cure::clone(void) const
{
	AMateria*	ret = NULL;

	if (_type == "cure")
		ret = new Cure;
	else
		std::cout << "WTF IS THIS TYPE ?! I NEED A CURE !" << std::endl;
	return (ret);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */