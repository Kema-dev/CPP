/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:28:19 by jjourdan          #+#    #+#             */
/*   Updated: 2021/09/14 19:21:29 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zomb1 = Zombie("Heuss");
	zomb1.announce();
	Zombie	*zomb2 = newZombie("Vald");
	zomb2->announce();
	randomChump("JuL");
	delete zomb2;
	return (0);
}
