/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:48:25 by jjourdan          #+#    #+#             */
/*   Updated: 2021/10/06 20:00:21 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "../Animal/Animal.hpp"
# include "../Brain/Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& src);
		Cat(Cat& src);
		~Cat();
		Cat&	operator=(const Cat& rhs);
		void	makeSound(void) const;
		Brain	*getBrain(void) const;
	private:
		Brain	*_brain;
};

#endif /* ******************************************************** CAT_HPP */