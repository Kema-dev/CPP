/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:08:46 by jjourdan          #+#    #+#             */
/*   Updated: 2021/11/19 15:01:45 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	maxHitPoints = 10;
	maxEnergyPoints = 10;
	maxAttackDamage = 0;
	type = "ClapTrap";
	setHitPoints(maxHitPoints);
	setEnergyPoints(maxEnergyPoints);
	setAttackDamage(maxAttackDamage);
	std::cout << "Default " << type << " constructor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string dname) : name(dname)
{
	maxHitPoints = 10;
	maxEnergyPoints = 10;
	maxAttackDamage = 0;
	type = "ClapTrap";
	setHitPoints(maxHitPoints);
	setEnergyPoints(maxEnergyPoints);
	setAttackDamage(maxAttackDamage);
	std::cout << "New " << type << " " << name << " created !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) : name(src.name + "(Copy)"), \
											hitPoints(src.hitPoints), \
											energyPoints(src.energyPoints), \
											attackDamage(src.attackDamage), \
											type(src.type), \
											maxHitPoints(src.maxHitPoints), \
											maxEnergyPoints(src.maxEnergyPoints), \
											maxAttackDamage(src.maxAttackDamage)
{
	std::cout << "Copy constructor of " << type << " " << src.name << " called !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& src) : name(src.name + "(Copy)"), \
										hitPoints(src.hitPoints), \
										energyPoints(src.energyPoints), \
										attackDamage(src.attackDamage), \
										type(src.type), \
										maxHitPoints(src.maxHitPoints), \
										maxEnergyPoints(src.maxEnergyPoints), \
										maxAttackDamage(src.maxAttackDamage)
{
	std::cout << "Copy constructor of " << type << " " << src.name << " called !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << type << " " << name << " has been destructed forever !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap&				ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "Assignation operator of " << rhs.name << " called !" << std::endl;
	if ( this != &rhs )
	{
		hitPoints = rhs.hitPoints;
		energyPoints = rhs.energyPoints;
		name = rhs.name + "(Assigned)";
		attackDamage = rhs.attackDamage;
		maxHitPoints = rhs.maxHitPoints;
		maxEnergyPoints = rhs.maxEnergyPoints;
		maxAttackDamage = rhs.maxAttackDamage;
		type = rhs.type;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		ClapTrap::attack(std::string const & target)
{
	if (hitPoints <= 0)
		std::cout << name << " is already dead !" << std::endl;
	else
		std::cout << type << " " << name << " attacks " << target << " causing " << attackDamage << " points of damage !" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int hp = hitPoints;

	if (hitPoints <= 0)
	{
		std::cout << type << " " << name << " is already dead !" << std::endl;
		return ;
	}
	else if (amount <= 0)
	{
		std::cout << "The attack is causing no dammage to " << type << " " << name << " !" << std::endl;
		return ;
	}
	hp -= amount;
	if (hp > maxHitPoints) // * overflow protection
		hp = 0;
	if (hp <= 0)
	{
		std::cout << name << " takes " << amount << " dammage and dies !" << std::endl;
		hitPoints = 0;
	}
	else
	{
		std::cout << type << " " << name << " takes " << amount << " dammage and now has " << hp << " hitPoints !" << std::endl;
		hitPoints = hp;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (amount <= 0)
		std::cout << type << " " << name << " can't be repaired a null amount of HP !" << std::endl;
	else
	{
		if ((amount > maxHitPoints) || (hitPoints + amount > maxHitPoints))
		{
			hitPoints = maxHitPoints;
			std::cout << type << " " << name << " has been fully repaired and now has " << hitPoints << " hitPoints !" << std::endl;
		}
		else
		{
			hitPoints = hitPoints + amount;
			std::cout << type << " " << name << " has been repaired and now has " << hitPoints << " hitPoints !" << std::endl;
		}
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */