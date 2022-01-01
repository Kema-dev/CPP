/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:25:48 by jjourdan          #+#    #+#             */
/*   Updated: 2021/09/14 19:23:02 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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

/* ************************************************************************** */