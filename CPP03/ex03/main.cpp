/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:57:51 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/02 11:57:37 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap *u1 = new DiamondTrap("Heuss");
	DiamondTrap *u2 = new DiamondTrap("SCH");
	u1->attack("SCH");
	u2->takeDamage(30);
	std::cout << "Kill test : ";
	u2->takeDamage(1000);
	u2->beRepaired(100);
	DiamondTrap u3;
	u3 = *u2;
	u3.takeDamage(50);
	DiamondTrap u4(u3);
	u4.beRepaired(1);
	u3.highFiveGuys();
	u3.guardGate();
	u1->whoAmI();
	u2->whoAmI();
	u3.whoAmI();
	u4.whoAmI();
	delete u1;
	delete u2;
	return(0);
}
