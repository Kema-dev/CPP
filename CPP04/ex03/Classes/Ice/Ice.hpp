/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdan <jjourdan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:40:33 by jjourdan          #+#    #+#             */
/*   Updated: 2021/12/03 11:35:45 by jjourdan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "../AMateria/AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& src);
		Ice(Ice& src);
		virtual ~Ice() {};
		virtual AMateria*	clone(void) const;
		virtual void use(ICharacter& target);
};

#endif /* ******************************************************** ICE_HPP */