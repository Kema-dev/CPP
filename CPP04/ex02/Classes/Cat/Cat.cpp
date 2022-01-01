/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:12:17 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/06 20:19:36 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain;
	std::cout << "Default Cat constructor called !" << std::endl;
}

Cat::Cat(const Cat& src)
{
	*this = src;
	std::cout << "Copy constructor of " << src._type << " called !" << std::endl;
}

Cat::Cat(Cat& src)
{
	*this = src;
	std::cout << "Copy constructor of " << src._type << " called !" << std::endl;
}

Cat&	Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	_brain = new Brain(*rhs._brain);
	std::cout << "Assignation operator of " << rhs._type << " called !" << std::endl;
	return *this;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete _brain;
	std::cout << _type << " has been destructed forever !" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Cat::makeSound(void) const
{
	std::cout << _type << " says \"MIAOU MIAOU\" !" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (_brain);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */