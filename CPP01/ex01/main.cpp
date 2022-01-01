/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:28:19 by jjourdan          #+#    #+#             */
/*   Updated: 2021/09/14 19:28:33 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		nb;
	Zombie	*Horde;

	nb = 8;
	Horde = zombieHorde(nb, "Freeze");
	for (int i = 0; i < nb; i++)
		Horde[i].announce();
	delete [] Horde;
	return (0);
}
