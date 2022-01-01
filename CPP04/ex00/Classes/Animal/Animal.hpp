/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:46:55 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/06 20:51:02 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <cmath>

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
	protected:
		std::string	_type;
};

#endif /* ******************************************************** ANIMAL_HPP */