/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:48:25 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/05 09:53:43 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "../WrongAnimal/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& src);
		WrongCat(WrongCat& src);
		~WrongCat();
		WrongCat&	operator=(const WrongCat& rhs);
		// void	makeSound(void) const;
};

#endif /* ******************************************************** WRONGCAT_HPP */