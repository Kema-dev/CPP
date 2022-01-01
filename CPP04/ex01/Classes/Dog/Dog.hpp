/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:48:56 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/06 20:00:40 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "../Animal/Animal.hpp"
# include "../Brain/Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& src);
		Dog(Dog& src);
		~Dog();
		Dog&	operator=(const Dog& rhs);
		void	makeSound(void) const;
		Brain	*getBrain(void) const;
	private:
		Brain	*_brain;
};

#endif /* ******************************************************** DOG_HPP */