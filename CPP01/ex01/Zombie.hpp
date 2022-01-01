/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:25:48 by jjourdan          #+#    #+#             */
/*   Updated: 2021/09/14 19:25:38 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
	std::string _name;

	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce( void );
	void	setName(std::string name);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
Zombie*	zombieHorde( int N, std::string name );

#endif /* ********************************************************** ZOMBIE_H */