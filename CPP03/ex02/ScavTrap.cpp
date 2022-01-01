/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:08:46 by jjourdan          #+#    #+#             */
/*   Updated: 2021/11/19 14:58:53 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	maxHitPoints = 100;
	maxEnergyPoints = 50;
	maxAttackDamage = 20;
	type = "ScavTrap";
	setHitPoints(maxHitPoints);
	setEnergyPoints(maxEnergyPoints);
	setAttackDamage(maxAttackDamage);
	std::cout << "Default " << type << " constructor called !" << std::endl;
}

ScavTrap::ScavTrap(std::string dname)
{
	maxHitPoints = 100;
	maxEnergyPoints = 50;
	maxAttackDamage = 20;
	type = "ScavTrap";
	setHitPoints(maxHitPoints);
	setEnergyPoints(maxEnergyPoints);
	setAttackDamage(maxAttackDamage);
	setName(dname);
	std::cout << "New " << type << " " << getName() << " created !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	maxHitPoints = src.maxHitPoints;
	maxEnergyPoints = src.maxEnergyPoints;
	maxAttackDamage = src.maxAttackDamage;
	type = src.type;
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	setName(src.getName() + "(Copy)");
	std::cout << "Copy constructor of " << type << " " << src.getName() << " called !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& src)
{
	maxHitPoints = src.maxHitPoints;
	maxEnergyPoints = src.maxEnergyPoints;
	maxAttackDamage = src.maxAttackDamage;
	type = src.type;
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	setName(src.getName() + "(Copy)");
	std::cout << "Copy constructor of " << type << " " << src.getName() << " called !" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs)
{
	if ( this != &rhs )
	{
		type = rhs.type;
		maxHitPoints = rhs.maxHitPoints;
		maxEnergyPoints = rhs.maxEnergyPoints;
		maxAttackDamage = rhs.maxAttackDamage;
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setName(rhs.getName() + "(Assigned)");
		setAttackDamage(rhs.getAttackDamage());
	}
	std::cout << "Assignation operator of " << type << " " << rhs.getName() << " called !" << std::endl;
	return *this;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << type << " " << getName() << " has been destructed forever !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void		ScavTrap::guardGate(void)
{
	std::cout << type << " " << getName() << " is now guarding a gate !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */