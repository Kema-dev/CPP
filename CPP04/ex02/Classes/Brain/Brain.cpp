/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:08:46 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/04 20:02:48 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	_ideas[0] = "first idea";
	_ideas[99] = "last idea";
	std::cout << "Default Brain constructor called !" << std::endl;
}

Brain::Brain(const Brain& src)
{
	*this = src;
	std::cout << "Copy constructor of Brain called !" << std::endl;
}

Brain::Brain(Brain& src)
{
	*this = src;
	std::cout << "Copy constructor of Brain called !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "A Brain has been destructed forever !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain&				Brain::operator=(const Brain& rhs)
{
	// if (this != &rhs)
		for (int i = 0; i < 100; i++)
			_ideas[i] = rhs._ideas[i];
	std::cout << "Assignation operator of " << rhs._ideas << " called !" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Brain::displayIdeas()
{
	for (int i = 0; i < 100; i++)
	{
		if (_ideas[i] != "")
			std::cout << "Idea " << i << ": " << _ideas[i] << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Brain::setIdea(int i, std::string str)
{
	if (i >= 0 && i < 100)
		_ideas[i] = str;
	else
		std::cerr << "I don't have more than 100 ideas !" << std::endl;
}

std::string Brain::getIdea(int i)
{
	if (i >= 0 && i < 100)
		return (_ideas[i]);
	else
	{
		std::cerr << "I don't have more than 100 ideas !" << std::endl;
		return (NULL);
	}
}

/* ************************************************************************** */
