/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:57:51 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 11:12:46 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Classes/Dog/Dog.hpp"
#include "Classes/Cat/Cat.hpp"
#include "Classes/WrongCat/WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "meta is a " << meta->getType() << " !" << std::endl;
	std::cout << "j is a " << j->getType() << " !" << std::endl;
	std::cout << "i is a " << i->getType() << " !" << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	const WrongCat* wrcat = new WrongCat();
	wrcat->makeSound();

	delete meta;
	delete i;
	delete j;
	delete wrcat;
}
