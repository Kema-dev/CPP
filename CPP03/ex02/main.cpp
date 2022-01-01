/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:57:51 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/02 11:54:03 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap *u1 = new FragTrap("Heuss");
	FragTrap *u2 = new FragTrap("SCH");
	u1->attack("SCH");
	u2->takeDamage(30);
	std::cout << "Kill test : ";
	u2->takeDamage(1000);
	u2->beRepaired(100);
	FragTrap u3;
	u3 = *u2;
	u3.takeDamage(50);
	FragTrap u4(u3);
	u4.beRepaired(1);
	u4.highFiveGuys();
	delete (u1);
	delete (u2);
	return(0);
}