/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:08:46 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/02 12:05:08 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap()
{
	setClapName();
	type = "DiamondTrap";
	maxHitPoints = 100;
	setHitPoints(maxHitPoints);
	maxEnergyPoints = 50;
	setEnergyPoints(maxEnergyPoints);
	maxAttackDamage = 30;
	setAttackDamage(maxAttackDamage);
	std::cout << "Default " << ScavTrap::type << " constructor called !" << std::endl;
}

DiamondTrap::DiamondTrap(std::string dname)
{
	ScavTrap::setName(dname);
	setClapName();
	type = "DiamondTrap";
	maxHitPoints = 100;
	setHitPoints(maxHitPoints);
	maxEnergyPoints = 50;
	setEnergyPoints(maxEnergyPoints);
	maxAttackDamage = 30;
	setAttackDamage(maxAttackDamage);
	std::cout << "New " << ScavTrap::type << " " << ScavTrap::getName() << " created !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &src)
{
	setName(src.ScavTrap::getName() + "(Copy)");
	setClapName();
	type = "DiamondTrap";
	maxHitPoints = src.maxHitPoints;
	setHitPoints(src.getHitPoints());
	maxEnergyPoints = src.maxHitPoints;
	setEnergyPoints(src.getEnergyPoints());
	maxAttackDamage = src.maxAttackDamage;
	setAttackDamage(src.getAttackDamage());
	std::cout << "Copy constructor of " << ScavTrap::type << " " << src.ScavTrap::getName() << " called !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	setName(src.ScavTrap::getName() + "(Copy)");
	setClapName();
	type = "DiamondTrap";
	maxHitPoints = src.maxHitPoints;
	setHitPoints(src.getHitPoints());
	maxEnergyPoints = src.maxHitPoints;
	setEnergyPoints(src.getEnergyPoints());
	maxAttackDamage = src.maxAttackDamage;
	setAttackDamage(src.getAttackDamage());
	std::cout << "Copy constructor of " << ScavTrap::type << " " << src.ScavTrap::getName() << " called !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << ScavTrap::type << " " << ScavTrap::getName() << " has been destructed forever !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this != &rhs)
	{
		setName(rhs.ScavTrap::getName() + "(Assigned)");
		setClapName();
		type = "DiamondTrap";
		maxHitPoints = rhs.maxHitPoints;
		setHitPoints(rhs.getHitPoints());
		maxEnergyPoints = rhs.maxHitPoints;
		setEnergyPoints(rhs.getEnergyPoints());
		maxAttackDamage = rhs.maxAttackDamage;
		setAttackDamage(rhs.getAttackDamage());

	}
	std::cout << "Assignation operator of " << ScavTrap::type << " " << rhs.ScavTrap::getName() << " called !" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	DiamondTrap::setClapName(void)
{
	clapName = getName() + "_clapName";
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << ScavTrap::getName() << " and my ClapTrap parent is nammed " << getClapName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */