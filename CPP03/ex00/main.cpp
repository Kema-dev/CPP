/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:57:51 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/02 11:51:43 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap *u1 = new ClapTrap("Heuss");
	ClapTrap *u2 = new ClapTrap("SCH");
	u1->attack("SCH");
	u2->takeDamage(0);
	std::cout << "Kill test : ";
	u2->takeDamage(1000);
	u2->beRepaired(100);
	ClapTrap u3;
	u3 = *u2;
	u3.takeDamage(50);
	ClapTrap u4(u3);
	u4.beRepaired(1);
	delete (u1);
	delete (u2);
	return(0);
}