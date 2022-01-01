/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:48:25 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/05 09:53:43 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "../Animal/Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& src);
		Cat(Cat& src);
		~Cat();
		Cat&	operator=(const Cat& rhs);
		void	makeSound(void) const;
};

#endif /* ******************************************************** CAT_HPP */