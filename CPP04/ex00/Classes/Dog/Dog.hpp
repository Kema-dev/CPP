/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:48:56 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/05 09:53:36 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "../Animal/Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& src);
		Dog(Dog& src);
		~Dog();
		Dog&	operator=(const Dog& rhs);
		void	makeSound(void) const;
};

#endif /* ******************************************************** DOG_HPP */