/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:57:51 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 11:47:41 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Classes/Character/Character.hpp"
#include "Classes/MateriaSource/MateriaSource.hpp"
#include "Classes/Ice/Ice.hpp"
#include "Classes/Cure/Cure.hpp"
#include <unistd.h>

int main()
{
	IMateriaSource* src = new MateriaSource();
	Ice *ice1 = new Ice();
	Cure *cure1 = new Cure();
	Cure *cure2 = new Cure();
	Cure *cure3 = new Cure();
	Cure *cure4 = new Cure();
	src->learnMateria(ice1);
	src->learnMateria(cure1);
	src->learnMateria(cure2);
	src->learnMateria(cure3);
	src->learnMateria(cure4);
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("dne");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(4);
	me->use(4, *bob);
	me->unequip(1);
	me->use(1, *bob);
	me->equip(tmp);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}
