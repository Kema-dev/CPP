/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:01:36 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/06 21:13:32 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria&	AMateria::operator=(const AMateria& rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
		_buf = rhs._buf;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria*	AMateria::clone(void) const
{
	return (NULL);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const&	AMateria::getType(void) const
{
	return(_type);
}

/* ************************************************************************** */