/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:07:04 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/07 18:50:32 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	_item = new AMateria *[5]();
	std::cout << "Default Character constructor called !" << std::endl;
}

Character::Character(std::string dname)
{
	_item = new AMateria *[5]();
	_name = dname;
}

Character::Character(const Character& src) : _name(src._name)
{
	_item = new AMateria *[5]();
	_item[0] = src._item[0]->clone();
	_item[1] = src._item[1]->clone();
	_item[2] = src._item[2]->clone();
	_item[3] = src._item[3]->clone();
	std::cout << "Copy constructor of " << src._name << " called !" << std::endl;
}

Character::Character(Character& src) : _name(src._name)
{
	_item = new AMateria *[5]();
	_item[0] = src._item[0]->clone();
	_item[1] = src._item[1]->clone();
	_item[2] = src._item[2]->clone();
	_item[3] = src._item[3]->clone();
	std::cout << "Copy constructor of " << src._name << " called !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	delete _item[0];
	_item[0] = NULL;
	delete _item[1];
	_item[1] = NULL;
	delete _item[2];
	_item[2] = NULL;
	delete _item[3];
	_item[3] = NULL;
	delete [] _item;
	_item = NULL;
	std::cout << "A basic Character " << _name << " has been destructed forever !" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character&				Character::operator=(const Character& rhs)
{
	if (this != &rhs )
	{
		_name = rhs._name;
		if (rhs._item != NULL)
		{
			_item = new AMateria *[5]();
			_item[0] = rhs._item[0]->clone();
			_item[1] = rhs._item[1]->clone();
			_item[2] = rhs._item[2]->clone();
			_item[3] = rhs._item[3]->clone();
		}
	}
	std::cout << "Assignation operator of " << rhs._name << " called !" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		Character::equip(AMateria* m)
{
	int	i = -1;

	while (++i <= 3)
	{
		if (_item[i] == m)
		{
			std::cout << "You already own this materia !" << std::endl;
			return ;
		}
		if (_item[i] == NULL)
		{
			_item[i] = m;
			return ;
		}
	}
	std::cout << "Sorry, " << _name << "'s inventory is full !" << std::endl;
}

void		Character::unequip(int idx)
{
	if ((idx >= 0) && (idx <= 3))
		_item[idx] = NULL;
	else
		std::cout << "Sorry, " << _name << "'s inventory is only 4 items wide ([0] to [3]) !" << std::endl;
}

void		Character::use(int idx, ICharacter& target)
{
	if ((idx < 0) || (idx > 3))
	{
		std::cout << "Sorry, " << _name << "'s inventory is only 4 items wide ([0] to [3]) !" << std::endl;
		return ;
	}
	if (_item[idx] == NULL)
		std::cout << "Sorry, " << _name << "'s inventory has no materia in slot " << idx << " !" << std::endl;
	else
		_item[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const& Character::getName(void) const
{
	return(_name);
}

/* ************************************************************************** */