/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 06:58:54 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/03 19:01:42 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Weapon::Weapon(std::string dtype) : _type(dtype)
{
	//std::cout << "A new " << dtype << " has been created !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Weapon::~Weapon()
{
	//std::cout << "Weapon " << _type << " has been destroyed ..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Weapon::setType(std::string dtype)
{
	_type = dtype;
	//std::cout << "Successfully assigned " << dtype << " to a weapon !" << std::endl;
}

std::string&	Weapon::getType()
{
	return (_type);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */