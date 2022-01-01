/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:25:48 by jjourdan          #+#    #+#             */
/*   Updated: 2021/09/14 19:28:28 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie( std::string name ) : _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "BRAAAAAW " << _name << " died forever..." << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}

Zombie*	newZombie( std::string name )
{
	Zombie	*self;

	self = new Zombie(name);
	return( self );
}

void	randomChump( std::string name )
{
	Zombie(name).announce();
}

Zombie*	zombieHorde( int N, std::string name )
{
	if (N < 1)
		return NULL;
	Zombie	*self = new Zombie[N];
	for (int i = 0; i < N; i++)
		self[i].setName(name);
	return (self);
}

/* ************************************************************************** */