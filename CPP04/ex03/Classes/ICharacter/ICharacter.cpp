/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:07:04 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/08 14:48:15 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void		ICharacter::equip(AMateria* m)
{
	(void)m;
}

void		ICharacter::unequip(int idx)
{
	(void)idx;
}

void		ICharacter::use(int idx, ICharacter& target)
{
	(void)idx;
	(void)target;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const& ICharacter::getName(void) const
{
	std::string	*ret;

	ret = new std::string(0);
	return (*ret);
}

/* ************************************************************************** */