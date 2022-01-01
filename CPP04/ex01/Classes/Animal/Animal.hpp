/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:46:55 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 16:21:54 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "../Brain/Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(const Animal& src);
		Animal(Animal& src);
		virtual ~Animal();
		Animal&	operator=(const Animal& rhs);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		virtual	Brain	*getBrain() const {return NULL;};
	protected:
		std::string	_type;
};

#endif /* ******************************************************** ANIMAL_HPP */