/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 07:00:41 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/03 19:09:26 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanA::HumanA(std::string dname, Weapon& dweapon) : _name(dname), _weapon(dweapon)
{
	//std::cout << "An HumanA nammed " << dname << " has been created with a " << weapon.getType() << " !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanA::~HumanA()
{
	//std::cout << "Ho no, " << name << " the HumanA died ..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void	HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */