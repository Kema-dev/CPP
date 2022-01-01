/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:12:17 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/06 15:29:56 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "Default WrongCat constructor called !" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src)
{
	*this = src;
	std::cout << "Copy constructor of " << src._type << " called !" << std::endl;
}

WrongCat::WrongCat(WrongCat& src)
{
	*this = src;
	std::cout << "Copy constructor of " << src._type << " called !" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const &rhs)
{
	if ( this != &rhs )
		_type = rhs._type;
	std::cout << "Assignation operator of " << rhs._type << " called !" << std::endl;
	return *this;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << _type << " has been destructed forever !" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

// void		WrongCat::makeSound(void) const
// {
// 	std::cout << _type << " says \"I am a WrongCat\" !" << std::endl;
// }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */