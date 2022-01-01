/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:46:55 by jjourdan          #+#    #+#             */
/*   Updated: 2021/08/05 09:50:30 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# include <cmath>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& src);
		WrongAnimal(WrongAnimal& src);
		~WrongAnimal();
		WrongAnimal&	operator=(const WrongAnimal& rhs);
		void			makeSound(void) const;
		std::string		getType(void) const;
	protected:
		std::string	_type;
};

#endif /* ******************************************************** WRONGANIMAL_HPP */