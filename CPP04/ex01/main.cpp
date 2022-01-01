/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:57:51 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 16:22:12 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Classes/Dog/Dog.hpp"
#include "Classes/Cat/Cat.hpp"
#include "Classes/Brain/Brain.hpp"

int main(void)
{
	Animal**	herd = new Animal*[10];
	for (int i = 0; i < 5; i++)
		herd[i] = new Cat;
	for (int i = 5; i < 10; i++)
		herd[i] = new Dog;
	for (int i = 0; i < 10; i++)
		herd[i]->getBrain()->displayIdeas();

	Cat	cat = Cat();
	cat.getBrain()->setIdea(30, "LOL");
	Cat cpy = cat;
	Cat cpy2(cat);
	std::cout << "Copy:" << std::endl;
	cpy.getBrain()->displayIdeas();
	std::cout << "Copy2:" << std::endl;
	cpy2.getBrain()->displayIdeas();
	std::cout << "Cat:" << std::endl;
	cat.getBrain()->setIdea(50, "MDR");
	std::cout << "Copy:" << std::endl;
	cpy.getBrain()->displayIdeas();
	std::cout << "Copy2:" << std::endl;
	cpy2.getBrain()->displayIdeas();
	std::cout << "Cat:" << std::endl;
	cat.getBrain()->displayIdeas();

	for (int i = 0; i < 10; i++)
		delete herd[i];
	delete [] herd;
	return (0);
}
