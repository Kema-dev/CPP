/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:08:46 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/02 12:00:12 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
	maxHitPoints = 100;
	maxEnergyPoints = 100;
	maxAttackDamage = 30;
	type = "FragTrap";
	setHitPoints(maxHitPoints);
	setEnergyPoints(maxEnergyPoints);
	setAttackDamage(maxAttackDamage);
	std::cout << "Default " << type << " constructor called !" << std::endl;
}

FragTrap::FragTrap(std::string dname)
{
	maxHitPoints = 100;
	maxEnergyPoints = 100;
	maxAttackDamage = 30;
	type = "FragTrap";
	setHitPoints(maxHitPoints);
	setEnergyPoints(maxEnergyPoints);
	setAttackDamage(maxAttackDamage);
	setName(dname);
	std::cout << "New " << type << " " << getName() << " created !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src)
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

FragTrap::FragTrap(FragTrap& src)
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

FragTrap&	FragTrap::operator=(FragTrap const &rhs)
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

FragTrap::~FragTrap()
{
	std::cout << type << " " << getName() << " has been destructed forever !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void		FragTrap::highFiveGuys(void)
{
	std::cout << type << " " << this->getName() << " is requesting an high five !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */