/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 07:01:11 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/04 22:48:17 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB(std::string dname) : _name(dname)
{
	//std::cout << "An HumanB nammed " << dname << " has been created !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
	//std::cout << "Ho no, " << name << " the HumanB died ..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void	HumanB::setWeapon(Weapon &dweapon)
{
	_weapon = &dweapon;
}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon ! What are you doing !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */