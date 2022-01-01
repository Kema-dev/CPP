/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:19:07 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/06 21:04:23 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	_buf = new AMateria *[5]();
	std::cout << "Default MateriaSource constructor called !" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	_buf = new AMateria *[5]();
	_buf[0] = src._buf[0]->clone();
	_buf[1] = src._buf[1]->clone();
	_buf[2] = src._buf[2]->clone();
	_buf[3] = src._buf[3]->clone();
	std::cout << "Copy constructor of MateriaSource called !" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource& src)
{
	_buf = new AMateria *[5]();
	_buf[0] = src._buf[0]->clone();
	_buf[1] = src._buf[1]->clone();
	_buf[2] = src._buf[2]->clone();
	_buf[3] = src._buf[3]->clone();
	std::cout << "Copy constructor of MateriaSource called !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	delete _buf[0];
	_buf[0] = NULL;
	delete _buf[1];
	_buf[1] = NULL;
	delete _buf[2];
	_buf[2] = NULL;
	delete _buf[3];
	_buf[3] = NULL;
	delete [] _buf;
	_buf = NULL;
	std::cout << "A basic MateriaSource has been destructed forever !" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void		MateriaSource::learnMateria(AMateria* cpy)
{
	int	i = -1;

	while (++i <= 3)
	{
		if (_buf[i] == NULL)
		{
			_buf[i] = cpy->clone();
			return ;
		}
	}
	std::cout << "Sorry, you have no memory slot available to learn a new Materia !" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int	i = -1;

	while (++i <= 3)
	{
		if ((_buf[i] != NULL) && (_buf[i]->getType() == type))
		{
			return (_buf[i]->clone());
		}
	}
	std::cout << "Sorry, you didn't learn this Materia !" << std::endl;
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */